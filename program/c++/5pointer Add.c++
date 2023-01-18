#include <iostream>
using namespace std;
int main() {
    int i, x[6]={ 1, 2, 53, 4, 5, 6}, sum = 0;
	cout<<"Enter 6 numbers:"<<endl;
    for(i = 0; i < 6; ++i) 
	{
      cout<<x[i]<<endl;
   //   cin>>x+i;
      sum += *(x+i);
  }

  cout<<"Sum = "<<sum;
}
