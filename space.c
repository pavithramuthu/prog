#include<stdio.h>
int main()
{
	char s[50];
	int c=0,i;
	printf("\n Enter your string:");
	scanf("%[^\n]",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{

			c=c+1;
	}
	}
	printf("\n The number of spaces are%d:",c);
	return 0;
}
