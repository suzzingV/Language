#include "basicArith.h" //PI도 같이 가져옴

double TriangleArea(double base, double height)
{
	return Div(Mul(base, height), 2);
}

double CircleArea(double rad)
{
	return Mul(Mul(rad, rad), PI);
}