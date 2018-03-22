#include<iostream>
using namespace std;
int main() 
{
int K,sum=0;
cout<<"Enter the K value : "<<endl;
cin>>K;
for(int i=1;i<=K;i++)
{
sum=sum+i;
}
cout<<"Sum of first "<<K<<" values is : "<<sum<<endl;
return 0;
}
