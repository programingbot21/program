#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		cin>>a[i][j];
	}
	
	int row_start=0, row_end=n-1, coloum_start=0,coloum_end=m-1,coloum;
	while(row_start<=row_end&& coloum_start<=coloum_end)
	{
		for(int coloum=coloum_start; coloum<=coloum_end; coloum++)
		{
			cout<<a[row_start][coloum]<<" ";
		}
		row_start++;
		for(int row=row_start; row<=row_end; row++)
		{
			cout<<a[row][coloum_end]<<" ";
		}
		coloum_end--;
		for(int coloum=coloum_end; coloum>=coloum_start; coloum--){
		cout<<a[row_end][coloum]<<" ";
	   }
	   row_end--;
	   for(int row=row_end; row>=row_start; row--)
	   {
	   	cout<<a[row][coloum_start]<<" ";
	   }
	   coloum_start++;
	   //for(int col=coloum_start; col>=coloum_end; col++)
	   //{
	   	//cout<<a[col]
	   //}
	}
	
}
