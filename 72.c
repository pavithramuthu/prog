#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char s[1];
clrscr();
printf("Enter the string");
for(i=0;i<1;i++)
{
scanf("%s",&s[i]);
}
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
