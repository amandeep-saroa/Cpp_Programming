#include<iostream>
using namespace std;
int main()
{

    int x;
    cout << "Enter base: ";
    cin >> x;

    int n;
    cout << "Enter power: ";
    cin >> n;

    int ans = 1;

    for(int  i = 1; i <= n; i++)
    {

        ans *= x;

    }

    cout << x << " to the power of " << n << ": " << ans;

}