#include<stdio.h>
#include<conio.h>
int main()
{
int i;
char a[100];
clrscr();
printf("Ente the string");
for(i=0;i<100;i++)
{
scanf("%s"et,&a[i]);
}
if((('a'<=a[i]>='z')||('A'<=a[i]>='Z')&&(0<=a[i]>=9))
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
