#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k=0;
	cout<<"Enter the value\n";
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++)
		{
			if( j==i||j==n+1-i)
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
