#include<stdio.h>
#include<conio.h>
void main()
{
char s[10];
int i,g;
clrscr();
printf("Enter the string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==s[i+1])
{
g=1;
}
}
if(g==1)
{
printf("NO");
}
else
{
printf("YES");
}
getch();
}
