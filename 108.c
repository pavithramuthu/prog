#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,d,i,s=0,tn;
clrscr();
printf("Enter the value for first term,total number and difference");
scanf("%d%d%d",&a,&n,&d);
for(i=a;i<=tn;i=i+d)
{
s=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
}
printf("%d",s);
getch();
}
