#include <iostream>
using namespace std;
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "The length of the array is: " << length << endl;
    return 0;
}
