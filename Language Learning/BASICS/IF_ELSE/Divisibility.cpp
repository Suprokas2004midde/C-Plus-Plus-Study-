#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%5==0 && n%3==0)
    {
        cout << " The number is divisible by 5 and 3....";
    }
    else 
    cout << " it is not divisible by 5 and 3 .....";
    
    return 0;
}