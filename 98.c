#include <stdio.h>
#include<conio.h> 
void main() 
{
	int n,array[30],i;
  clrscr();
	printf("Enter n size");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=array[i])
		{
			printf("\n%d",i);
			break;
		}
	}
 
	getch();
}
