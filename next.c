#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int c=0,i;
	printf("\n Enter your string:");
	scanf("%c",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{

			c++;
	}
	}
	printf("\n The number of spaces are%d:",c);
	return 0;
}
