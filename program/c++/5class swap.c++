#include<iostream>
using namespace std;
class swp
{
	private:
		int a,b;
		public:
			void input()
			{
				cout<<"Enter the value A"<<endl;
				cin>>a;
				cout<<"Enter the value B"<<endl;
				cin>>b;
			}
			void calculateSwap()
			{
				a=a+b;
				b=a-b;
				a=a-b;
			}
			 void show()
			 {
			 	cout<<"A = "<<a<<endl;
			 	cout<<"B = "<<b<<endl;
			 }
};
int main()
{
	swp ob;
	ob.input();
	ob.calculateSwap();
	ob.show();
}
