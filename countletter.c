#include<stdio.h>
int main()
{
	char a[100];
	int i,c=0;
	printf("Enter the string");
	for(i=0;i<=100;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<=a[i];i++)
	{
	if(((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))||(a[i]!=' '))
	{
             c++;
	}
	}	printf("\n%d",c);
	return 0;
}
