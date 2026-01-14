#include <iostream>
using namespace std;
void checkEvenOdd(int number)
 {
    if (number % 2 == 0)
	 {
        cout << number << " is Even" << endl;
    } else {
        cout << number << " is Odd" << endl;
    }
}
int main() 
{
    checkEvenOdd(10);
    checkEvenOdd(7);
    checkEvenOdd(22);
    return 0;
}
