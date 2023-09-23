#include<iostream>
using namespace std;
// void swap(int a,int b,int s)
// {
//     int a=b;
//     int b=s;
// }
int main()
{
    int n;
    cin >> n;
    int a=0;
    int b=1;
    for (int i=1;i<=n;i++)
    {
        int sum=a+b;
        cout << sum << " ";
        // swap (a,b,sum)
        /*THE SWAPING ORDER IS IMPORTENT*/
        a=b;
        b=sum;
    }
    return 0;
}