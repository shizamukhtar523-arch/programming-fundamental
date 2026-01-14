 #include <iostream>
using namespace std;

int main() 
{
    int* ptr = 0;
    if (ptr == 0) {
        cout << "Pointer does not point to any valid memory." << endl;
    } else 
	{
        cout << "Memory address: " << ptr << endl;
    }
    return 0;
}
