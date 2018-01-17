#include <stdio.h>
#include<conio.h>
void main()
{
    int i,n,m;
    clrscr();
      printf("Print all even from %d to till %d:");
    scanf("%d%d",&m,&n);
  printf("All even numbers from %d to %d are:\n",m,n);
   for(i=0;i<n;i++)
    {
               if(i%2!=0)
        {
            printf("%d\n",i);
        }

        i++;
    }
    getch();
}
