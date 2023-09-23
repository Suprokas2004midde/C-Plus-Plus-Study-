#include<iostream>
using namespace std;
int main()
{
    int sell_price,buy_price;
    cout << "Enter the bying Price :" ;
    cin >> buy_price;

    cout << "Enter the  Selling Price : ";
    cin >> sell_price;

    int value=sell_price-buy_price;
    if (value >0)
    {
        cout << "The seller Makes a profit of :" << value << endl;
    }
    else if (value == 0)
    {
        cout  <<"Seller has No Loss No profit...." << endl;
    }
    else
    {
        cout <<"Seller has net loss of :" << (-value) << endl;
    }
    
    return 0;
}