// print the given pattern....
/*
   1 2 3 4 5
   4 3 2 1 
   1 2 3
   2 1
   1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=1;
        int b=n-i+1;
        if(i%2!=0)
        {
            for(a;a<=b;a++)
            {
                cout << a << " ";
            }
        }
        else
        {
            for(b;b>0;b--)
            {
                cout << b << " ";
            }
        }
        cout << endl;
    }
    return 0;
}