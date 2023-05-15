#include<iostream>
using namespace std;

int sum(int arr[] , int size)
{

    int add = 0;
    for(int i = 0; i < size; i++ )
    {
        add += arr[i];
    }
    return add;

}

int main()
{

    int size;
    cout << "Enter array size: ";
    cin >> size;

    // taking input into array
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter array element at index " << i << ": ";
        cin >> arr[i];

    }

    cout << "Sum of element in array: " << sum(arr , size);


}