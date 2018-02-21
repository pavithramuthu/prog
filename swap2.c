#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter a and b\n");
	scanf("%d\n%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("%d\n%d",a,b);
	return 0;
}
