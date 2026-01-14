#include <iostream>
using namespace std;
void displayMenu() 
{
    cout << "\n--- Restaurant Menu ---" << endl;
    cout << "1. Burger   - Rs. 500" << endl;
    cout << "2. Pizza    - Rs. 1200" << endl;
    cout << "3. Fries    - Rs. 200" << endl;
    cout << "4. Sandwich - Rs. 400" << endl;
    cout << "5. Drink    - Rs. 100" << endl;
    cout << "0. Finish Order & Exit" << endl;
}
double calculateItemCost(double price, int quantity) 
{
    return price * quantity;
}
void displayFinalBill(double total)
 {
    double tax = total * 0.10; 
    cout << "\n--- Final Bill ---" << endl;
    cout << "Subtotal:       Rs. " << total << endl;
    cout << "Service Charge: Rs. " << tax << endl;
    cout << "Total Amount:   Rs. " << total + tax << endl;
}
int main() 
{
    int choice, quantity;
    double totalBill = 0;
    do
	 {
        displayMenu();
        cout << "Select item number: ";
        cin >> choice;
        if (choice != 0) 
		{
            double price = 0;
            if (choice == 1) price = 500;
            else if (choice == 2) price = 1200;
            else if (choice == 3) price = 200;
            else if (choice == 4) price = 400;
            else if (choice == 5) price = 100;
            else
			 {
                cout << "Invalid item!" << endl;
                continue;
            }
            cout << "Enter quantity: ";
            cin >> quantity;
            totalBill += calculateItemCost(price, quantity);
        }
    }
	 while (choice != 0);
    displayFinalBill(totalBill);
    return 0;
}
