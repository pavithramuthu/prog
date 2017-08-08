#include<conio.h>
void main()
{
int a,b,c;
printf("enter the 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("the number a is largest");
}
else if(b>c)
{
printf("the number b is largest");
}
else
{
printf("the number c is largest");
getch();
}
}
