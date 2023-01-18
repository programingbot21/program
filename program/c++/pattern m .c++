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
			if( j==1|| j==n ||j==i && i<=5|| j==n+1-i&&i<=5)
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
