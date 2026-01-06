#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    int max = arr[0]; // Start with the first element
    for (int i = 1; i < n; i++) 
	{
        if (arr[i] > max)
		 {
            max = arr[i];
        }
    }
    cout << "The largest number is: " << max << endl;
    return 0;
}
