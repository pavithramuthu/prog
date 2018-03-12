#include<stdio.h>
#include<conio.h>
void main()
{
char s[50];
int n,i;
clrscr();
printf("Enter the string");
scanf("%s",&s);
n=strlen(s);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
printf("%c",s[i]);
}
}
for(i=0;i<=n;i++)
{
if(i%2==1)
{
printf("%c",s[i]);
}
}
getch();
}
