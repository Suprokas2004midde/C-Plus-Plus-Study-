// Print the given pattern.....
/*        A
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
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout << " " << " ";
        }
        for(int k=1;k<=i;k++)
        {
            char ch =64+k;
            cout << ch << " ";
        }
        cout << endl;
    }
}