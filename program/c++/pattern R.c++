#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k=0;
	cout<<"Enter the value\n";
	cin>>n;
	for(i=1; i<=7; i++){
		for(j=1; j<=5; j++)
		{
			if( j==1||j==5||i==1)
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
