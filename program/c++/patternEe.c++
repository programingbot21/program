#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the value";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if( j==1|| i==1||i==n/2+1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
