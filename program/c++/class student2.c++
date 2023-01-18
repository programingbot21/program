#include<iostream>
using namespace std;
class student
{
	public:
		double marks;
		student(double m)
		{
			marks= m;
		}
};
int calculateAverage(student s1, student s2)
{
	double average=(s1.marks + s2.marks)/2;
	cout<<"Average marks = "<<average<<endl;
}
int main()
{
	student student1(88.5),student2(75.3);
	calculateAverage(student1,student2);
}
