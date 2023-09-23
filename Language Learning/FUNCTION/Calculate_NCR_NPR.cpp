#include<iostream>
using namespace std;
int factorial (float n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int ncr(int a,int b)
{
    int ans=factorial(a)/(factorial(b)*factorial(a-b));
    return ans;
}
int main()
{
    float  n,r;
    cin >> n >>r;
    int answer=ncr(n,r);
    cout << "The FaCtorial Is :" << answer << endl;
    return 0;
}