#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,i,t,c;
clrscr();
printf("Enter the n and m values");
scanf("%d%d",&n,&m);
c=n*m;
for(i=1;i<=c/2;i++)
{
if(i*i==c)
{
t=1;
break;
}
}
if(t==1)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
