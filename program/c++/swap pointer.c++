#include<iostream>
using namespace std;
void swap(int*, int*);
int main()
{
	int a,b;
	cout<<"Before swaping"<<endl;
	cout<<"Enter the valu a"<<endl;
	cout<<"A = ";
	cin>>a;
	cout<<"Enter the valu b"<<endl;
	cout<<"B = ";
	cin>>b;
	swap(&a, &b);
	cout<<"After swaping"<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b;
}
 void swap(int* n1, int* n2)
 {
 	int temp;
 	temp=*n1;
 	*n1=*n2;
 	*n2=temp;
 }
