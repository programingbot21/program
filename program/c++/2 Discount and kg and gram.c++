#include <iostream>

using namespace std;

int main()
{
    float a,gm,hc,r,dis,k,p;
    cout<<"Real price Sugar RS=45";
	cout<<"\nsugar Discount      : ";
	cin>>a;
	cout<<"Enter the gm = ";
	cin>>gm;
	k=1000;
	r=45;
	dis=r-(a*r/100);
	cout<<"1 kg discount price "<<dis;
	p=(gm*dis)/k;
	cout<<endl<<"Price = "<<p;
}
