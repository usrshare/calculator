HRESULT ULongAdd( ULONG ulAugend, ULONG ulAddend, ULONG *pulResult) {

	if ((ulAugend + ulAddend) < (ulAugend))
		return INTSAFE_E_ARITHMETIC_OVERFLOW;
	else {
		*pulResult = ulAugend + ulAddend;
		return S_OK;
	}
}

HRESULT ULongMult( ULONG ulA, ULONG ulB, ULONG *pulR) {

	if ((ulB != 0) && ( ((ulA * ulB) / ulB) < ulA))
		return INTSAFE_E_ARITHMETIC_OVERFLOW;
	else {
		*pulR = ulA * ulB;
		return S_OK;
	}
}
