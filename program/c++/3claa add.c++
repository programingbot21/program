#include<iostream>
using namespace std;
class add
{
	private:
		int a,b,c;
		public:
			void input()
			{
				cout<<"Enter the value"<<endl;
				cin>>a;
				cin>>b;
			}
			void calculateAdd()
			{
				c=a+b;
			}
			void show()
			{
				cout<<"C = "<<c;
			}
};
int main()
{
	add ob;
	ob.input();
	ob.calculateAdd();
	ob.show();
}
