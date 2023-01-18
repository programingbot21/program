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
			if( i==1|| i==n||j==n/2+1)
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
