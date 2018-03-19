#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[50];
int n,i,l,count=-1;
clrscr();
printf("Enter the string");
scanf("%s",&s);
scanf("%d",&l);
n=strlen(s);
for(i=n;i>=-0;i--)
{
      printf("%c",s[i]);
      count++;
if(l==count)
{
break;
}
}
getch();
}
