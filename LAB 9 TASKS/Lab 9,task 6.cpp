#include <iostream>
using namespace std;
int main() 
{
    int password;
    int correctPassword = 1234;
    do
	 {
        cout << "Enter password: ";
        cin >> password;
        if (password != correctPassword)
		 {
            cout << "Wrong password! Try again.\n";
        }
    } while (password != correctPassword);
    cout << "Access granted!\n";
    return 0;
}
