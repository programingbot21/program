#include<iostream>
using namespace std;
int pattern( int i, int j, int n, int m)
{
	for(i=1; i<=m/2+1; i++)
	{
		for(j=1; j<=m; j++)
		{
			if(j>=m/2+2-i && j<=m/2+i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<"\n";
}
}
int main()
{
	int  i,j,n,m;  //n=4, m=7
	//cout<<"Enter the row nuber =\n";
	//cin>>n;
	cout<<"Enter the coloum ="<<endl;
	cin>>m;
	pattern( i,j,n, m); 
}
