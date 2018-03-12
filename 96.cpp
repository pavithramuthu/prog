#include<iostream.h>
#include<conio.h>
void main()
{
int n,j,t;
clrscr();
cout<<"Enter number";
cin>>n;
for(j=2;j<=n/2;j++)
{
if(n%j==0)
{
t=1;
break;
}
}
if(t==0)
{
cout<<"NO";
}
else
{
cout<<"YES";
}
getch();
}
