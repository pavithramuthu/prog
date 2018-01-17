#include <stdio.h>
void main()
{
    int base,ex;
    long long result=1;
    clrscr();
    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &ex);

    while (ex!= 0)
    {
        result *= base;
    }
    printf("Answer = %d", result);
    getch();
}
