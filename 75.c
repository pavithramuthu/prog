#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n;
char s[50];
clrscr();
printf("Enter the string");
scanf("%s",&s);
n=strlen(s);
if(n%2==0)
{
s[n/2]='*';
s[(n/2)-1]='*';
}
else
{
s[n/2]='*';
}
printf("\n%s",s);
getch();
}
