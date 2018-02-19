#include<stdio.h>
int main()
{
	int ele[10],i,min,max;
	
	printf("\nEnter the elements:");
	for(i=0;i<10;i++)
	{
	scanf("%d",&ele[i]);
	}
	max=min=ele[0];
	for(i=0;i<10;i++)
	{
		if(ele[i]>min)
		{
		min=ele[i];		}
			
		
	}
printf("\nmax=%d",min);
	return 0;
	
}
