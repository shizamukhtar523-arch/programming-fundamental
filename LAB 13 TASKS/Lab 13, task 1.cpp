#include <iostream>
using namespace std;
int main() 
{
    int myValue = 50;     
    int* myPointer;       
    myPointer = &myValue; 
    cout << "Value of the variable is: " << *myPointer << endl;
    return 0;
}
