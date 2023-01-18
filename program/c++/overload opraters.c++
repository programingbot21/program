#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		void getdata()
		{
			cout<<"Enter a Number: ";
			cin>>a;
		}
		void putdata()
		{
			cout<<"\n value of a="<<a;
		}
		demo operator+(demo bb)
		{
			demo cc;
			cc.a=a+bb.a;
			return cc;
		}
	};
		int main()
		{
			demo cc,bb,aa;
			aa.getdata();
			bb.getdata();
			cc=aa+bb;
			aa.putdata();
			bb.putdata();
			cc.putdata();
			return 0;
			
		}
