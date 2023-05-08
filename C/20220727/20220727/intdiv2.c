#include "stdiv.h"

Div IntDiv2(int num1, int num2)
{
	Div dva1;
	dva1.quotient = num1 / num2;
	dva1.reminder = num1 % num2;
	return dva1;
}