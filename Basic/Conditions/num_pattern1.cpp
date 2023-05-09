#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number n: ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {

        int val = i + 1;
        for(int j = 0; j <= i; j++)
        {

            cout << val;
            val++;
            


        }
        cout << endl;

    }

}