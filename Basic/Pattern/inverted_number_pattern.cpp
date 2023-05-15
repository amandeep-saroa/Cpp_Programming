#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number n: ";
    cin >> n;

    int temp = n;
    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < n-i; j++)
        {

            cout << temp;

        }
        for(int k = 0; k < i; k++)
        {
            cout << " ";
        }
        temp--;
        cout << endl;

    }

}