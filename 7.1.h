#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char ch;
	int number_blank=0, number_enter=0,number_letter=0;
	printf("Please enter sentence.\n");
	while ((ch=getchar())!='#')
	{
		if (ch == ' ')
			number_blank++;
		else if (ch == '\n')
			number_enter++;
		else
			number_letter++;
	}
	printf("The number of blank is %d\n", number_blank);
	printf("The number of enter is %d\n", number_enter);
	printf("The number of letter is %d\n", number_letter);
}