#include<stdio.h>
int main()
{
	int i,c=0;
	char a[100];
	printf("enter the string");
	scanf("%[^\n]",&a);
	for(i=0;i<a[i];i++)
	{
		if(a[i]>='1'&&a[i]<='9')
		{
		c++;	
		}
		else
		{
	}
	}
		printf("\n Count is %d",c);

	return 0;
}
