#include<iostream>
using namespace std;
class array
{
	private:
		char a_name[20],i;
		public:
			int input()
			{
			cout<<"Enter the value"<<endl;
			{
			cin>>a_name;
		    }
		    int show()
			{
				cout<<"Name = "<<a_name;
			}
};
int main()
{
	array ob;
	ob.input();
	ob.show();
}
