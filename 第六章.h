#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int main()
{
	float number1 ,number2;
	while (scanf("%f",&number1) &&scanf("%f",&number2)== 1)
		printf("%f\n", fabs(number1 - number2) / (number2 * number1));
}