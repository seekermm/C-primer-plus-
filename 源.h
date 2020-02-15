#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int integer[8] = { 2 }, n=0,i;
	for (i = 0;i <= 6;i++)
		integer[i + 1] = integer[i] * 2;
	do
	{
		printf("%d ", integer[n]);
		n++;
	} while (n<=7);
}