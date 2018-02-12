#include<stdio.h>
int main()
{
	int i,n,a,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	sum=sum+1;
            a=sum/2;
	}
	printf("\nAverage of n is %d",a);
	return 0;
}
