#include<iostream>
using namespace std;
int main()
{
	int age,income;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"Enter your annual income: ";
		cin>>income;
		if(income>=30000)
		{
			cout<<"Congratulations! You are illigible for loan.";
		}
		else
		{
			cout<<"You meet the age requirement but are not illigible for a loan because your income is below $30,000.";
		}
	}
	else 
	{
			cout<<"You are not illigible for a loan because you are under 18 years of age.";
		}
		return 0;
			}
