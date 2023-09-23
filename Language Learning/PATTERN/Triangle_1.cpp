// print the given pattren...
/*
           A
         A B C
       A B C D E
     A B C D E F G
   A B C D E F G H I
*/
#include<iostream>
using namespace std;
int main()
{
    int n;;
    cin>> n;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout << " " << " ";
        }
        for (int j=1;j<=2*i-1;j++)
        {
            char ch=64+j;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}