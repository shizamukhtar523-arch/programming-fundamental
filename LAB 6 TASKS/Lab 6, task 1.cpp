#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter temperature in celsius :";
	cin>>temp;
	if(temp>=40)
	{
		cout<<"It is extremely hot which could be dangerous to health So,Stay indoors.";
	}
	else if(temp>=30 && temp<=39)
	{
		cout<<"Drink plenty of water. Weather is hot.";
	}
	else if(temp>=20 && temp<=29)
	{
		cout<<"Weather is pleasent and suitable for outdoor activities.";
	}
	else
	{
		cout<<"Wear warm clothes to stay comfortable in cooler weather.";
	}
	return 0;
}
