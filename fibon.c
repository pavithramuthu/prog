#include<stdio.h>
int main()
{
int a=0,b=1,c=-1,i,n;
printf("enter the number");
scanf("%d",&n);
printf("\n%d",b);
for(i=1;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);

}
return 0;
}
