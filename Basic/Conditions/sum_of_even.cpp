// Given a number N, print sum of all even numbers from 1 to N.
#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number N: ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <=n; i++)
    {

        if(i % 2 ==0)
        {   

            sum += i;

        }

    }

    cout << "Sum of Even Number till " << n << ": " << sum;


}