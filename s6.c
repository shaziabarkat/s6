#include<stdio.h>
int main()
{
	int n;
	printf("enter a character");
	scanf("%c",&n);
	if((n>='a' && n<='z') || (n>='A' && n<='Z'))
	{
		printf("Alphabet");
	}
	else
	{
		printf("not");
	}
