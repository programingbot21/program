#include<iostream>
using namespace std;
void pattern(int  ,int , int );
main()
{
	int i=7,j=5,k=0;
	//cout<<"Enter the value\n";
	pattern(i,j,k);
//	return 0;
}
void pattern(int i, int j, int k)
{
	for(i=1; i<=7; i++){
	i<5?k++:k--;
		for(j=1; j<=5; j++)
		{
			if( j==1||j==6-k)
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
