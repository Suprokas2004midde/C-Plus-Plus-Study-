#include<iostream>
using namespace std;
int main()
{
  /*
    int a;
    //cin >> a;
    int b;
    cin >> b;
    we can also write...
    cin>> a>>b;
    // In this line we discussed how to put a space in/between a line....
    cout <<"The value of a and b is "<< a << " " << b << endl;
    // work of cin.get() function...
  */
    int a,b;
    a=cin.get();// This line usually take character as a input.....
    // now,the variable is in int form...So, it convert the character into it's corresponding ASCII value....
    cout << "value of a is : " << a<<endl;
}