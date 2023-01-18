#include<iostream>
using namespace std;
int main()
{
  int add[6];
  int i,sum=0;
  double ave=0;
  cout<<"enter the number \n";
  for(i=1; i<=5 ;i++)
  {
  cin>>add[i];}
  for(i=1; i<=5; i++)
  {
  sum=sum+add[i];
  ave=sum/add[i];
 
}
 cout<<sum<<" "<<endl;
  cout<<ave<<" ";
}
