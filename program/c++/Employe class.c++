#include<iostream>
using namespace std;
class Employeid
{
	private:
		float sal;
		int id;
		char name[];
		public:
			void input()
			{
				cout<<"Enter the id"<<endl;
				cin>>id;
				cout<<"Enter the name"<<endl;
				cin>>name;
				cout<<"Enter the salary"<<endl;
				cin>>sal;
			}
			void show()
			{
				cout<<"\nID = "<<id<<endl;
				cout<<"Name = "<<name<<endl;
				cout<<"Salary = "<<sal<<endl;
			}
};
int main()
{
    Employeid ob;
	ob.input();
	ob.show();	
}
