#include<stdio.h>
#include<conio.h>
void main()
{
char s[50],i,n;
clrscr();
printf("Enter the alphanumeric string");
scanf("%s",s);
n=strlen(s);
for(i=0;i<=n;i++)
{
if((s[i]>='0')&&(s[i]<='9'))
{
printf("%c",s[i]);
}
}
getch();
}
