#include<stdio.h>
int main()
{
	int n,size,ele[10],i,j;
            int k;
	printf("Size");
	scanf("%d",&size);
	printf("\nelements enter in sort order");
	for(i=0;i<size;i++)
	{
	scanf("%d",&ele[i]);
	}
	for(i=0;i<size;i++)
	{
		for(k=0;k<size;k++)
		{	
		k=size/2;
	
	
				if(k!=0)
				{
		printf("\n%d is middle element",ele[k]);
		}
		}	
	}
	return 0;
}
