#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : "<< endl;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout << "It's not a Prime Number"<<endl;
            break;
        }
        i=i+1;
    }
    if(i==n)
    cout<<"It's a Prime Number" << endl;
} 
