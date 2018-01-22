#include <stdio.h>
int main()
{
    int n,oN,re,res=0;
    
    printf("Enter a three digit integer ranges: ");
    scanf("%d",&n);

    oN=n;
{
    while(oN!=0)
    {
        re=oN%10;
        res+=re*re*re;
        oN/=10;
    }

    if(res==n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
   return 0;
}
