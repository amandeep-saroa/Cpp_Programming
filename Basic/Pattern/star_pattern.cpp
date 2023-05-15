#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number n: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {

        for(int k = 0; k < n - i; k++)
        {

            cout << " ";

        }
        for(int j = 0 ; j <= 2*i; j++)
        {   

            cout << "*";

        }
        cout << endl;

    }
}