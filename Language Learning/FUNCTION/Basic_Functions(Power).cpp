#include<iostream>
using namespace std;
int power ()
{
    int a,b;
    cout << "Enter the inputs : " << endl;
    cin >> a >> b;
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int answer = power();
    cout << "answer is : " << answer << endl;

    int answer2=power();
    cout << "answer is : " << answer2 << endl;
    return 0;
}