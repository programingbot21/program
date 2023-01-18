#include<iostream>
using namespace std;
int main()
{
	int r,d,tp,a;
	cout<<"Enter the Rate"<<endl;
	cin>>r;
	cout<<"Enter the discount"<<endl;
	cin>>d;
    tp=r-(d*r/100);
    a=r-tp;
    cout<<"Discount Rate ="<<a<<endl;
	cout<<"Costumer Pay Price= "<<tp;
}
