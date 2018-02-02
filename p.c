#include<stdio.h>
main()
{
int n1,n2,i;
printf("enter the numbers");
scanf("%d%d",&n1,&n2);
for(i=n1;i<n2;i++)
if(i%2==0)
printf("ans is %d",i);
getch();
}
