#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int downlimited, uplimited, i, sum;
	printf("Enter lower and upper integer limits:");
	scanf("%d%d", &downlimited, &uplimited);
	while (downlimited < uplimited)
	{
		sum = 0;
		for (i = downlimited;i <= uplimited;i++)
			sum +=(i * i);
		printf("The sums of squares from %d to %d is %d\n", downlimited * downlimited, uplimited * uplimited, sum);
		printf("Enter next set of limits:");
		scanf("%d%d", &downlimited, &uplimited);
	}
	printf("Done.\n");
}