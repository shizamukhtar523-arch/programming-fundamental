#include<iostream>
#include<string>
using namespace std;
int main()
{
	string username,password,role;
	cout<<"Enter username : ";
	cin>>username;
	cout<<"Enter password :";
	cin>>password;
	if(username=="admin")
	{
		if(password=="password123")
		{
			cout<<"Authentification Successfull!";
			cout<<"Enter your role(Admin/Guest/User):";
			cin>>role;
			if(role=="Admin"|| role=="admin")
			{
				cout<<"Full Access.";
			}
			else if(role=="Guest" || role=="guest")
			{
				cout<<"Limited Access.";
			}
			else
			{
				cout<<"No Access.";
			}
		}
		else
		{
			cout<<"Authentification Failed. Access Denied.";
		}
	}
	return 0;
}
