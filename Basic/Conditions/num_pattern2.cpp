#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number n: ";
    cin >> n;
    
    //rows
    for(int  i = 0; i < n; i++)
    {   
        int val = i+1;
        //spaces
        for(int  k = 1; k < n-i ; k++)
        {
            cout << " ";
        }
        //column number
        for(int j = 0; j <= i; j++)
        {
            cout << val;
            val++;
        }
        cout << endl;

        

        

    

    }

}