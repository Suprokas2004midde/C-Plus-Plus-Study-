// print the given pattern .....

/* A B C D E
     D C B A
       A B C
         B A
           A
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char a=65;
        char b=64+n-i+1;
        for(int j=i-1;j>0;j--)
        {
            cout << " " << " ";
        }
        if(i%2!=0)
        {
            for(a;a<=b;a++)
            {
                cout << a << " ";
            }
        }
        else
        {
            for(b;b>64;b--)
            {
                cout << b << " ";
            }
        }
        cout << endl;
    }
    return 0;
}