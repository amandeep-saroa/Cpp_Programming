#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        int j;
        for(j = i+1; j < size; j++)
        {

                if(arr[i] == arr[j])
                {   
                    return arr[i];
                    break;

                }

        }

    }
    return -1;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}