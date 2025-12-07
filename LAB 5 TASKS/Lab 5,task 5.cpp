#include<iostream>
using namespace std;
int main()
{
	char signal;
	cout<<"Enter signal color(R,G,Y):";
	cin>>signal;
	if(signal=='R')
	{
		cout<<" Red: Stop";
	}
	if(signal=='G')
	{
		cout<<" Green: Go";
	}
	if(signal=='Y')
	{
		cout<<" Yellow: Slow down";
	}
	return 0;
}
