#include<stdio.h>
int main()
{
	int p,q;
	printf("Enter the numbers");
	scanf("%d%d",&p,&q);
	p=p^q;
	q=p^q;
	p=p^q;
	printf("\nSwapping of numbers are..%d %d",p,q);
	return 0;
}
