// print the given pattern....
/* A B C D E F 
   A B C D E F
   A B C D E F 
   A B C D E F
   A B C D E F
*/
#include<iostream>
using namespace std;
int main()
{
    for (int i=1;i<=5;i++)
    {
        for(char j=65;j<=70;j++)
        {
            cout << j<< " ";
        }
        cout << endl;
    }
}