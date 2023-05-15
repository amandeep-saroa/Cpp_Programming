#include<iostream>
using namespace std;

void arrange(int *arr, int n)
{
    	
    int i = 0;
    int j = n - 1;
    int num = 1;
    
    while(i <=j)
    {
        	
    	if(num%2!=0){
            	
            arr[i]= num;
        
            i++;
        }
        
        else
        {
            	
            arr[j]=num;
            j--;
            
        }
        
        num++;
        
        
    }
        
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}