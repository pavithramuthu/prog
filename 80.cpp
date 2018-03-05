#include<iostream>
using namespace std;
int main()
{
int n,rm,rv=0;
cout<<"Enter the number";
cin>>n;
cout<<"\n";
while(n!=0)
{
rm=n%10;
rv=(rv*10)+rm;
n=n/10;
}
n=rv;
while(n!=0)
{
rm=n%10;
if(rm%2==1)
{
cout<<rm<<"\t";
}
n=n/10;
}
return 0;
}
