#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cpy=n;
    int i=0;
    while(i<31)
    {
        int power =pow(2,i);
        if(power==n)
        {
            cout << "true";
            break;
        }
        i=i+1;
    }
    if(i==31)
    {
        cout << "false";
    }
    return 0;
}