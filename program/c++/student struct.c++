#include<iostream>
using namespace std;
struct student
{
	char name[30];
	int roll,i;
	float Math;
	float science;
	float English;
	float Hindi;
	float phy;
	float total;
	float avg;
} s[10];
int main()
{
	cout<<"Enter the Student information"<<endl;
	for(int i=1; i<=2; i++)
	{
//	cout<<endl"Roll no";
	s[i].roll=i;
	cout<<"\nRoll no = "<<s[i].roll<<" "<<endl;
	cout<<"Name = "<<" ";
	cin>>s[i].name;
	cout<<"Math = "<<" ";
	cin>>s[i].Math;
	cout<<"Hindi = "<<" ";
	cin>>s[i].Hindi;
	cout<<"science = "<<" ";
    cin>>s[i].science;
    cout<<"Phyics = "<<" ";
    cin>>s[i].phy;
    cout<<"English = "<<" ";
    cin>>s[i].English;
    s[i].total=s[i].phy+s[i].Hindi+s[i].science+s[i].English+s[i].Math;
    s[i].avg=s[i].total/5;
    cout<<"Total "<<s[i].total<<endl;
    cout<<"persentage  "<<s[i].avg<<endl;
    }
	cout<<"\nDisplay information"<<endl;
	for(int i=1; i<=2; i++)
	{
	cout<<" \n\nRoll no "<<i<<endl;
	cout<<"Name = "<<s[i].name<<endl;
	cout<<"phy = "<<s[i].phy<<endl;
	cout<<"English = "<<s[i].English<<endl;
	cout<<"Math = "<<s[i].Math<<endl;
	cout<<"Hindi = "<<s[i].Hindi<<endl;
	cout<<"science = "<<s[i].science<<endl;
	cout<<"Total = "<<s[i].total<<endl;
	cout<<"Persentage = "<<s[i].avg<<endl;
    }
}
