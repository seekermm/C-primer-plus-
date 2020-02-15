#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float i=-1,n=1,sum_1=0, sum_2=0;
	int limit;
	scanf("%d", &limit);
	while (n<=limit)
	{
		sum_1 += 1.0 /n ;
		i = (-1)* i;
		sum_2 += i/ n;
		n++;
	}
	printf("%f\n", sum_1);
	printf("%f\n", sum_2);
	printf("%f\n", sum_1 + sum_2);
}