#include<stdio.h>
int main()
{
	int ele[1000],i,size,min,max;
	printf("\nEnter the size");
scanf("%d",&size);
	printf("\nEnter the elements:");
	for(i=0;i<size;i++)
	{
	scanf("%d",&ele[i]);
	}
	max=min=ele[0];
	for(i=0;i<size;i++)
	{
		if(ele[i]>min)
		{
		max=ele[i];		}
	}
printf("\nmax=%d",max);
{
for(i=0;i<size;i++)
	{
		if(ele[i]<min)
		{
		min=ele[i];		}
	}
printf("\nmin=%d",min);
	return 0;
}	
}
