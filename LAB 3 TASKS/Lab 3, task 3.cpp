#include <iostream>
#include<iomanip>
using namespace std;

int main()
 {
 	double score1=80.5;
 	double score2=90.0;
 	double score3=85.25;
 	//calculate average
 	double average=(score1+score2+score3)/3;
 	//result rounded to two decimal places
 	cout<<fixed<<setprecision(2);
 	cout<<"score1:"<< score1<<endl;
 	cout<<"score2:"<< score2<<endl;
 	cout<<"score3:"<< score3<<endl;
 	cout<<"average score:"<<average<<endl;
 	
	return 0;
}
