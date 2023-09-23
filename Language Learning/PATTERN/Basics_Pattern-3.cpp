// print the given pattern...
/* A
   A B
   A B C
   A B C D
   A B C D E
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=65;j<65+i;j++)
        {
            char ch=j;
            cout << ch << " ";
        }
        cout << endl;
    }
}