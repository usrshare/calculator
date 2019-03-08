// vim: sw=4
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <string>
#include <vector>
#include <stdexcept>
#include <memory>
#include <climits>

#include "CalculatorManager.h"
#include "CalculatorResource.h"

#include <FL/fl_ask.H>

#include "ui_callbacks.h"
#include "ui_fluid.h"

CalculationManager::CalculatorManager* pmgr;
	
void clear_tmd(void* p);

class TUICalcDisplay : public ICalcDisplay {
    public:
	TUICalcDisplay() {}
	void SetPrimaryDisplay(const std::wstring& pszText, bool isError) {
	    
	    char utf8out[512];
	    size_t r = wcstombs(utf8out, pszText.c_str(), 512);

	    value_display->copy_label(utf8out);
	    if (isError) 
		value_display->color(0xFFCCCC00);
		else
		value_display->color(_tooManyDigits ? 0xFFFFCC00 : FL_WHITE);

	    printf("[%c] %ls\n", isError ? 'E' : ' ',pszText.c_str());
	};
	void SetIsInError (bool isInError) { _inError = isInError; /*printf("E:%d\n", isInError);*/ }

	void SetExpressionDisplay(_Inout_ std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> const &tokens, _Inout_ std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> const &commands) {
	}

	void SetParenDisplayText(const std::wstring& pszText) {
	    
	    char utf8out[512];
	    size_t r = wcstombs(utf8out, pszText.c_str(), 512);
	    
	    paren_view_prg->copy_label(utf8out);
	    paren_view_sci->copy_label(utf8out);
	     
	    }
	void MaxDigitsReached() { printf("!\n"); _tooManyDigits = true; value_display->color(0xFFFFCC00); value_display->redraw(); Fl::add_timeout(0.5, clear_tmd, this); fl_beep(FL_BEEP_ERROR); } // not an error but still need to inform UI layer.
	void BinaryOperatorReceived() {}
	void OnHistoryItemAdded(_In_ unsigned int addedItemIndex) {}
	void SetMemorizedNumbers(const std::vector<std::wstring>& memorizedNumbers) {}
	void MemoryItemChanged(unsigned int indexOfMemory) { printf("memory index %d changed\n", indexOfMemory); }

    public:
	bool _tooManyDigits = false;
	bool _inError = false;
    private:
};

void clear_tmd(void* p) {
    ((class TUICalcDisplay*)p) -> _tooManyDigits = false;
    bool err = ((class TUICalcDisplay*)p) -> _inError;

    value_display->color(err ? 0xFFCCCC00 : FL_WHITE);
    value_display->redraw();
}

void CalcUISendCommand(CalculationManager::Command cmd) {

    pmgr->SendCommand(cmd);
}

void CalcUISwitchMode(enum CalcUIMode mode) {

    switch(mode) {
	case CM_BASIC:
	calcwin->size(215,285);
	value_display->size(195,50);
	binary_view->hide();
	memory_recall->activate();
	general_grp->position(10,88);
	scientific_grp->hide();
	programmer_grp->hide();
	break;
	case CM_SCIENTIFIC:
	calcwin->size(410,355);
	value_display->size(390,50);
	general_grp->position(210,159);
	//memory_recall->deactivate();
	scientific_grp->show();
	programmer_grp->hide();
	break;
	case CM_PROGRAMMER:
	calcwin->size(410,355);
	value_display->size(390,50);
	general_grp->position(210,159);
	//memory_recall->deactivate();
	scientific_grp->hide();
	programmer_grp->show();
	break;
    }
}

class TUIResourceProvider : public CalculationManager::IResourceProvider {
    public:
	TUIResourceProvider() {}
	std::wstring GetCEngineString(const std::wstring& id) {

	    if (id.compare(L"sDecimal")) return L".";
	    if (id.compare(L"sThousand")) return L"";
	    if (id.compare(L"sGrouping")) return L"0;0";

	    printf("asked for %ls\n", id.c_str());
	    return id;
	}

    private:
};

int main(int argc, char** argv) {

    TUICalcDisplay cd = TUICalcDisplay();
    TUIResourceProvider rp = TUIResourceProvider();

    Fl_Double_Window* calcwin = make_window();
    calcwin->show(argc,argv);

    CalculationManager::CalculatorManager mgr = CalculationManager::CalculatorManager(&cd,&rp);
    mgr.Reset(true);
    mgr.SendCommand(CalculationManager::Command::CommandMCLEAR);
    pmgr = &mgr;

    printf("loaded.");

    Fl::run();

    return 0;
}
