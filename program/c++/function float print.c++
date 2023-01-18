#include<iostream>
using namespace std;
void print(int n1, float n2)
{
    cout<<"Enter the int value \n";
	cin>>n1;
	cout<<"Enter the float\n"; 
	cin>>n2;
	cout<<"The int value "<<n1<<endl;
	cout<<"Float value "<<n2<<endl;
}
int main()
{
	int n1;
	float n2;
	print(n1,n2);
//    return 0;
}
