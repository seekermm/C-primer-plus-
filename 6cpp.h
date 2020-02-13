#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number,uplimited,downlimited;
	scanf("%d", &uplimited);
	scanf("%d", &downlimited);
	for (number = uplimited;number <= downlimited;number++)
		printf("%d %d %d\n", number, number * number, number * number * number);
}