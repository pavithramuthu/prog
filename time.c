#include<stdio.h>
int main()
{
	int hr,min;
	printf("enter the min\n");
	scanf("%d",&min);
         hr=min/60;
         min=min%60;
	printf("%d %d",hr,min);
	return 0;
	
	
	
}
