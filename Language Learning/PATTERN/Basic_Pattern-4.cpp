// print the given pattern ....
/* A B C D E
     A B C D
       A B C 
         A B 
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
        for(int j=1;j<=i-1;j++)
        {
            cout << " " << " ";
        }
        for(int k=1;k<=n-i+1;k++)
        {
            char ch=64+k;
            cout << ch << " ";
        }
        cout << endl;
    }
}