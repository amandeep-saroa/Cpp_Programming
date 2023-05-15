#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int temp = 1;
        for(int k = 0; k < n-i; k++)
        {

            cout << " ";

        }
        for(int j = 0; j < i; j++)
        {

            cout << temp;
            temp++;

        }
        cout << endl;
    }
}