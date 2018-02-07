#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the numbers");
	scanf("%d%d",&n,&m);
	n=n^m;
	m=n^m;
	n=n^m;
	printf("\nSwapping of numbers are..%d %d",n,m);
	return 0;
}
