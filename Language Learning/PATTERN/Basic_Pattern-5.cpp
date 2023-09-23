// PRINT THE GIVEN PATTERN....
/* A B C D E F 
     E D C B A
       A B C D
         C B A
           A B
             B
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout << " " << " ";
        }
        if(i%2!=0)
        {
            for(int k=1;k<=n-i+1;k++)
            {
                char ch1=64+k;
                cout << ch1 <<" ";
            }
        }
        else
        {
            for(int  l=n-i;l>0;l--)
            {
                char ch2=64+l;
                cout << ch2 <<" ";
            }
        }
        cout << endl;
    }
}