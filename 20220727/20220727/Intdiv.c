typedef struct div
{
	int quotient;
	int reminder;
}Div;

Div IntDiv(int num1, int num2)
{
	Div dva1;
	dva1.quotient = num1 / num2;
	dva1.reminder = num1 % num2;
	return dva1;
}