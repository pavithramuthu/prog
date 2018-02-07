#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("enter the number of value");
	scanf("%d",&n);
	printf("\nFibonacci numbers are\n%d",b);
	for(i=1;i<n;i++)
		{
		c=a+b;
		a=b;
		b=c;
		
	printf("%d",c);
		}
    return 0;
}
