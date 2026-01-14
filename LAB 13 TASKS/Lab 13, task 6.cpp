 #include <iostream>
using namespace std;
int main()
 {
    int myNum = 786;
    void* voidPtr = &myNum; 
    int* intPtr = static_cast<int*>(voidPtr);
    cout << "Value accessed via void pointer: " << *intPtr << endl;
    return 0;
}

