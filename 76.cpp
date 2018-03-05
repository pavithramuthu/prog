#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,t;
clrscr();
cout<<"Enter number";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
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
