#include<iostream>
using namespace std;
int calsquare(int n)
{
	return n*n;
}
int main()
{
	int n, square;
	cout<<"Enter the value"<<endl;
	cin>>n;
	square=calsquare(n);
	cout<<"The square of the given\n"<<n<<" = "<<square;
}
