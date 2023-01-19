#include<iostream.h>
using namespace std;
void main()
void printLeaders(int arr[],int n);
{
	int curr_leader=arr[n-1];
	cout<<curr_leader<<" ";
	for(int i-n-2; i>=0; i--)
	{
		if(arr[i]>curr_leader)
		{
			cout<<curr_leader=aa[i];
			cout<<curr_leader<<" ";
		}
	}
}
int main()
{

	int arr[10]={4,3,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	printLeaders(arr, n);
	return 0;
}
