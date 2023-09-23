#include<iostream>
using namespace std;
int even(int a)
{
    if(a&1) return 0;
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int ans=even(n);
    if(ans==0)
    {
        cout  << "The Number is odd" << endl;
    }
    else if(ans==1)
    {
        cout << " The Number is even " << endl;
    }

    return 0;
}