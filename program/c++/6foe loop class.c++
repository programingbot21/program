#include<iostream>
#include<conio.h>
using namespace std;
class loop
{
  private:
  int n,g,m;
  public:
  void input()
  {
  	cout<<"Enter the no"<<endl;
  	cin>>n;
  	cin>>m;
	  }	
	  void show()
	  {
	  for(int i=n; i>=1; i--)
	  cout<<endl<<"n = "<<i;{
	  for(int k=1; k<=m; k++)
	  cout<<endl<<"m = "<<k;
}
      }
};
int main()
{
	loop ob;
	ob.input();
	ob.show();
	return 0;
}
