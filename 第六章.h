#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
float fun(float x, float y);
int main()
{
	float number1, number2, result;
	fun(number1, number2);
}
float fun(float x, float y)
{
	float r;
	while (scanf("%f", &x) && scanf("%f", &y) == 1)
		printf("%f\n", fabs(x - y) / (x * y));
}