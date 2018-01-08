#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A'))
    {
    printf("Character is an ALPHABET.");
    }
    else
    {
     printf("Character is NOT ALPHABET.");
    }
    return 0;
}
