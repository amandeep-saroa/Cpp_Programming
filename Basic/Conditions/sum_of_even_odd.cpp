#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum_even = 0 , sum_odd = 0;
    
    while(n > 0)
    {

        int last_bit = n % 10;
        if(last_bit % 2 == 0)
        {

            sum_even += last_bit;

        }
        else
        {

            sum_odd += last_bit;

        }


        n = n/10;

    }

    cout << "Even Sum: " << sum_even << " " << "Odd Sum: " << sum_odd << endl;

}