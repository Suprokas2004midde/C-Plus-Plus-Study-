#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=1;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"the sum is : "<<sum<<endl;
}