#include "stdiv2.h"

Div IntDiv4(int num1, int num2)
{
	Div dval;
	dval.quotient = num1 / num2;
	dval.reminder = num1 % num2;
	return dval;
}