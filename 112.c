#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k,a[50],tem;
printf("Enter number");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]==k)
{
tem=1;
break;
}
}
if(tem==1)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
