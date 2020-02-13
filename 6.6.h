#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char ch[20] = {'a','p','p','l','e'};
	int i,n;
	n = strlen(ch);
	for (i = 0;i <= n;i++)
		printf("%c", ch[n - i]);

}