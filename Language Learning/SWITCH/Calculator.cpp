#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char operation;
    cin >> a >> b;
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "the sum is : " << (a+b) << endl;
        break;
    case '-':
        cout  << "The Substratcion is :" << (a-b) << endl;
        break;
    case '*':
        cout << "The multiplication is : " << (a*b) << endl;
        break;
    case '/':
        cout << "The Division is : " << (a/b) << endl;
        break;    
    }
    return 0;
}