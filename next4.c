#include<stdio.h>
int main()
{
	int k,i,c=0;
	char s;
	printf("Enter the k value");
	scanf("%d",&k);
	printf("\nEnter the string:");
	scanf("%c",&s);
	for(i=1;i<=k;i++)
	{
	c++;	
	printf("%c",s);
	}
	return 0;
}
