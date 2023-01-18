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
			if(j==1 || j==n || j==i)
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
