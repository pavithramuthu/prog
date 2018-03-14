#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k;
int m[100];
clrscr();
printf("Enter the number k and n");
scanf("%d%d",&k,&n);
printf("Enter the elements");
for(i=1;i<=n;i++)
{
scanf("%d",&m[i]);
}
for(i=1;i<=n;i++)
{
if(i==k)
{
printf("%d",m[i]);
}
}
getch();
}
