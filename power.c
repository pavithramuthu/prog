#include <stdio.h>
void main()
{
    int base, exponent;
    long long result = 1;
    clrscr();
    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= base;
    }
    printf("Answer = %lld", result);
    getch();
}
