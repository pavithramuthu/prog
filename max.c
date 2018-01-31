#include<stdio.h>
int main()
{
	int ele[20],size,i,max;
	printf("Enter the size");
	scanf("%d",&size);
	printf("\nEnter the elements:");
	for(i=0;i<size;i++)
	{
	scanf("%d",&ele[i]);
	}
	max=min=ele[0];
	for(i=0;i<size;i++)
	{
		if(ele[i]>max)
		{
		max=ele[i];
		}
		else
		{
				}
			printf("\nmax=%d",max);
			}
		
	
	
}
