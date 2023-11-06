#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>=48 && ch<=57)
    cout << "this is Numeric" << endl;
    else if (ch>=65 && ch<=90)
    cout << "This is Upper Case" << endl;
    else if (ch>=97 && ch<=122)
    cout << "This is Lower case" << endl;
    else
    cout << "input error" << endl; 
}