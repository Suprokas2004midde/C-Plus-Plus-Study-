#include<iostream>
using namespace std;
int main()
{
    cout  << 5/2 << endl;
    cout  << 5%2 << endl;
    cout  << 2%5 << endl; // if it's a modulo operation and the first number(DIVISOR) is smaller than the divider the the answer is the smallest number..... 
    cout  << 2/5 << endl;
    cout  << 5.0/2 << endl;
    cout  << 2.0/5 << endl;
    //cout  << 2.0%5 << endl; // it through an error....
    //cout  << 5.0 % 2.0 << endl; // one thing is to be noticed that --"IN FLOAT NUMBERS MODULO OPERATORS DOES NOT WORK....."
    return 0;
}