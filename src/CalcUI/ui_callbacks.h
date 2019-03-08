#ifndef UI_CALLBACKS_H
#define UI_CALLBACKS_H

enum CalcUIMode {
    CM_BASIC,
    CM_SCIENTIFIC,
    CM_PROGRAMMER
};

void CalcUISwitchMode(enum CalcUIMode mode);

void CalcUISendCommand(CalculationManager::Command cmd);

#endif
