#include<iostream.h>
#include<conio.h>
void main()
{
int n,table=1;
cout<<"Enter any num:";
cin>>n;
cout<<"Table of"<<n;
for(int i=1;i<=10;i++)
{
table=n*i;
cout<<"\n"<<table;
cout<<"\n";
}
}
