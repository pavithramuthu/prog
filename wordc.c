#include<stdio.h>
#include<conio.h>
void main()
{
	char s[50];
	int c=1,i;
        clrscr();
	printf("\n Enter your string:");
	scanf("%[^\n]",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{

			c=c+1;
	}
	}
	printf("\n Count is:%d:",c);
	getch();
}
