#include<iostream>
using namespace std;
int main()
{
	int salary,experience;
	cout<<" Enter the salary : ";
	cin>>salary;
	cout<<" Enter years of work experience : ";
	cin>>experience;
	if(salary>=25000)
	{
		cout<<"You are illigible for loan.";
	}
	else if(salary>=20000 && experience>5 )
	{
		cout<<"You are  illigible for loan.";
	}
	else
	{
		cout<<"You are not illigible for loan.";
	}
	return 0;
}
