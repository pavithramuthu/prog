#include <stdio.h>
#include<conio.h>
void main()
{
    long long num;
    int count=0;
    clrscr();
    printf("Enter any number: ");
    scanf("%lld", &num);
   while(num!=0)
    {
       count++;
       num=num/10;
    }
    printf("Total digits: %d",count);
    getch();
}
