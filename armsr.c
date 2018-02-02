#include<stdio.h>
#include<math.h>
int main()
{
    int num,last,digits,sum,i;
    int start,end;
    printf("Enter lower limit:");
    scanf("%d",&start);
    printf("Enter upper limit:");
    scanf("%d",&end);
    printf("Armstrong number between %d to %d are: \n", start, end);
    for(i=start;i<=end;i++)
    {
        sum=0;
                num=i;
                digits=(int)log10(num)+1;
                while(num>0)
        {
            last=num%10;     
            sum=sum+pow(last,digits);       
            num=num/10;
        }
        if(i==sum)
        {
           printf("%d,",i);
        }
    }
 return 0;
}
