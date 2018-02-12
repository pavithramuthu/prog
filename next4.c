#include<stdio.h>
int main()
{
	int k,i,c=0;
            char s[100];
	printf("Enter the string");
	scanf("%s",&s);
	printf("\nEnter the k value");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
	c++;	
	printf("\n%s",s);
	}
	return 0;
}
