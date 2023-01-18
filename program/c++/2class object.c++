#include<iostream>
using namespace std;
class demo
{
	private :
		int a, b;
		public:
			void input()
			{
				cout<<"Enter the value"<<endl;
				cin>>a;
				cin>>b;
			}
			void show()
			{
				cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
			}
};
int main()
{
	demo ob,ob1,ob2;
	ob.input();
	ob.show();
	ob1.input();
	ob1.show();
	ob2.input();
	ob2.show();
}
