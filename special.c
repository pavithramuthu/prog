#include<stdio.h>
int main()
{
	int i,c=0;
	char a[100];
	printf("enter the string");
	scanf("%[^\n]",&a);
	for(i=0;i<a[i];i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]==' '))
		{
			
		}
		else
		{
			c++;
	}
	}
		printf("\n Count is %d",c);

	return 0;
}
