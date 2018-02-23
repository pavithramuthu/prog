#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100],i;
clrscr();
printf("Enter the string\n");
scanf("%s%s",&a,&b);
for(i=0;i<100;i++)
{
if(a[i]<=b[i])
{
printf("%s",b[i]);
}
else
{
printf("%s",a[i]);
}
}
getch();
}
