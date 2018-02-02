#include <stdio.h>
int main()
{
    int i,n,m;
      printf("enter the numbers:");
    scanf("%d%d",&m,&n);
  printf("All odd numbers from %d to %d are:\n",m,n);
   for(i=m;i<n;i++)
    {
              if(i%2!=0)
        {
            printf("%d\n",i);
        }
        
    }
   return i;
}
