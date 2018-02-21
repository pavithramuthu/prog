#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
if(n%2==0)
{
printf("\n%d",n);
}
else
{
n--;
printf("\n%d",n);
}
getch();
}
