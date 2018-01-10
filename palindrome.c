#include <stdio.h>

int main()
{
int re,rn=0,n;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
	re=n%10;
	rn=rn*10+re;
	n=n/10;
	if(n==rn)
	printf("yes");
	else
	printf("no");
}
	return n;
}
