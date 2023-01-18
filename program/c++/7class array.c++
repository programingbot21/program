#include<iostream>
using namespace std;
class arr
{
	private:
		int a,b;
		public:
			void input()
			{
				cout<<"Enter the number"<<endl;
				cin>>a;
			//	cin>>b;
			}
			void show()
			{
				cout<<"\n"<<a;
			}
};
int main()
{
	arr bb[5];
	for(int i=1; i<=5; i++)
	bb[5].input();
	for(int i=1; i<=5; i++)
	bb[5].show();
}
