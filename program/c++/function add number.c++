#include<iostream>
using namespace std;
void add(int a,int b, int c,int n)
//void sub(int a,int b, int c,int n)
{
	cout<<"Enter the number A \n";
	cin>>a;
	cout<<"Enter the number b \n";
	cin>>b;
	cout<<"Enter the number c \n";
	cin>>c;
	n=a+b+c;
	cout<<"Add the number"<<" = "<<n<<endl;
	
	
}
int main()
{
	int a,b,c,n;
	add(a,b,c,n);
}

