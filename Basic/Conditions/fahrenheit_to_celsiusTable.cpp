// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
#include <iostream>
using namespace std;
int main()
{
    
    int s , e , w;
    cout << "Enter start Fahrenheit value: ";
    cin >> s;
    cout << "Enter end Fahrenheit value: ";
    cin >> e;
    cout << "Enter step size: ";
    cin >> w;

    for(int i = s; i <= e; i += w)
    {

        cout << i << " " << (i - 32) * 5 / 9 << endl;

    }


}