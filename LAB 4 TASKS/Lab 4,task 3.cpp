#include<iostream>
using namespace std;
int main()
{
double balance;
int loyaltyStatus;//1 for loyal,0 for not loyal
cout<<"Enter account balance:";
cin>> balance;
cout<<"Enter loyalty status:";
cin>> loyaltyStatus;
string accountType=(balance<100)? "Low balance account":(balance>=100&&balance<=500)? "Standard account":"Premium account";
string specialOffer=(balance>200 && loyaltyStatus==1)?"Eligible for special offer":"Not Eligible for special offer";
cout<<"Account Type:"<<accountType<<endl;
cout<<"Special offer eligibility:"<<specialOffer;
return 0;
}
