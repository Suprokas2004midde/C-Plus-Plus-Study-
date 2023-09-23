#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int pos=1;
    int bitmask=(1<<pos);
    int New_Number=(bitmask | n);
    cout << New_Number;
    return 0;
}