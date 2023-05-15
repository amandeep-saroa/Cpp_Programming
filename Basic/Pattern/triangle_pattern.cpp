#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {   
        int temp = i;
        for(int k = 0; k < n-i; k++)
        {
            cout << " ";
        }
        
        for(int j = 0; j < i; j++)
        {
            cout << temp;
            temp++;
        }
        temp -= 2;;
        for(int l = temp; l >= i; l--)
        {

            cout << temp;
            temp--;

        }
        cout << endl;

    }

}