#include <stdio.h>
#include<conio.h>
void main()
{
	int n,rem,pro=1;
	clrscr();
	printf("Enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		pro=pro*rem;
		n=n/10;
	}
	printf("\n%d",pro);
getch();
}
