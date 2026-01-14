#include <iostream>
using namespace std;
int main() 
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int* ptr = numbers; 
   cout << "Displaying array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) 
	{
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }
    return 0;
} 
