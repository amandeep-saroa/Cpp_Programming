#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number n : ";
    cin >> n;
    char ch = 'A';   // ascii value
    for(int i = 1; i <= n ; i++)
    {
        ch = 'A' + i - 1;
        for(int j = 0; j < i; j++)
        {
            cout << ch;
            ch++;  // ch++ means that if ch is 'A' AND WE DO ch++ this will add 1 to ascii value of A and when this ascii is stored in char variable it is interpreted as acharacter and A++ IS B

        }
        cout << endl;
    }

}