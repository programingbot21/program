#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
	int a[n][m];//={{1,2,3},{4,5,6},{7,8,9}};
	//int i,j,n,m;
	cin>>n>>m;
	cout<<"Enter the value\n";
	cin>>a[i][j];
	for(int i=0; i<3; i++)
	{
		for(int j=i; j<3; j++)
		{
	    	cin>>a[i][j];
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
    }
    for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
