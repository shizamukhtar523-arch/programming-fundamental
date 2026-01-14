#include <iostream>
using namespace std;
long long calculateFactorial(int n)
 {
    long long result = 1;
    for (int i = 1; i <= n; i++)
	 {
        result *= i; 
    }
    return result;
}
int main() 
{
    int num;
    cout << "Enter a number to find its Factorial: ";
    cin >> num;
    if (num < 0)
	 {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else 
	{
        cout << "The Factorial of " << num << " is: " << calculateFactorial(num) << endl;
    }
    return 0;
}
