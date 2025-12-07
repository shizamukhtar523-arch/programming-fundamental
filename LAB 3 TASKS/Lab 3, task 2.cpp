#include <iostream>
#include<iomanip>//for fixed and set precision
using namespace std;

int main() 
{
	 double item1= 12.95;
	 double item2= 24.95;
	 double item3= 6.95;
	 double item4= 14.95;
	 double item5= 3.95;
	 const double tax_rate=0.06;//6%
	 cout<<fixed<<setprecision(3);
	 cout<<"price of item 1: $"<<item1<<endl;
	 cout<<"price of item 2: $"<<item2<<endl;
	 cout<<"price of item 3: $"<<item3<<endl;
	 cout<<"price of item 4: $"<<item4<<endl; 
	 cout<<"price of item 5: $"<<item5<<endl;
	 //calculate subtotal
	 double subtotal =item1+item2+item3+item4+item5;
	 //calculate saletax
	 double salestax=subtotal*tax_rate;
	 //calculate total amount
	 double total=subtotal+salestax;
	 cout<<"subtotal: $"<<subtotal<<endl;
	 cout<<"salestax (6%): $"<<salestax<<endl;
	 cout<<"total: $"<<total<<endl;
	 	return 0;
}
