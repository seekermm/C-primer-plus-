#include<stdio.h>
int main()
{
	int number[8] = { 1,2,3,4,5,6,7,8 }, i;
	for (i = 7;i >= 0;i--)
		printf("%d", number[i]);
}