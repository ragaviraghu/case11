#include<iostream>
using namespace std;
int main()
{
int a[10],small;
cout<<"Enter the value of 10 numbers : "<<endl;
for(int i=0;i<10;i++)
{
cin>>a[i];
}
small=a[0];
for(int i=1;i<10;i++)
{
if(a[i]<small)
small=a[i];
}
cout<<"The minimum number is "<<small<<endl;
return 0;
}
