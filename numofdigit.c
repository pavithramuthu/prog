#include <stdio.h>
int main()
{
    long long num;
    int count=0;
    printf("Enter any number: ");
    scanf("%d", &num);
   while(num!=0)
    {     
       count++;
       num=num/10;
    }
    printf("\nTotal digits: %d",count);
    return 0;
}
