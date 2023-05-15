#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{

    int zeroes = 0;
    for(int i = 0; i < size; i++)
    {   

        if(input[i] == 0)
        {
            zeroes++;
        }

    }
    for(int i = 0; i < zeroes; i++)
    {
        input[i] = 0;
    }
    for(int i = zeroes; i < size; i++)
    {
        input[i] = 1;
    }

}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}