#include<iostream>
using namespace std;
class Room
{
	public:
		double lenght;
		double breadth;
		double height;
		
		double calculateArea()
		{
		return lenght*breadth;  
	    }
	    double calculateVolume()
	    {
		return lenght*breadth*height;
	    }
};
int main()
{
	Room room1;
	room1.lenght= 30.5;
	room1.breadth=17.3;
	room1.height=25.5;
	cout<<"Area of room = "<<room1.calculateArea()<<endl;
	cout<<"Area of volume = "<<room1.calculateVolume()<<endl;
}
