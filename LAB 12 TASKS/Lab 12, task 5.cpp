#include <iostream>
using namespace std;
void add(double a, double b) 
{ 
cout << "Result: " << a + b << endl;
 }
void subtract(double a, double b) 
{
 cout << "Result: " << a - b << endl;
  }
void multiply(double a, double b) 
{
 cout << "Result: " << a * b << endl; 
 }
void divide(double a, double b) 
{
    if (b != 0) cout << "Result: " << a / b << endl;
    else cout << "Error: Division by zero is not allowed." << endl;
}
int main() 
{
    int choice;
    double num1, num2;
    do
	 {
        cout << "\n--- Simple Calculator Menu ---" << endl;
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit" << endl;
        cout << "Select an operation (1-5): ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) 
		{
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
        switch (choice) 
		{
            case 1: add(num1, num2);
			 break;
            case 2: subtract(num1, num2);
			 break;
            case 3: multiply(num1, num2);
			 break;
            case 4: divide(num1, num2);
			 break;
            case 5: cout << "Exiting calculator..." << endl; 
			break;
            default: cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}
