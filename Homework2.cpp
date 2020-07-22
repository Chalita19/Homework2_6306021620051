#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string name ;
	short Salary ;
	short Sale ;
	float commissing ;
	float Total ;
	//*********input**********
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> Salary;
	cout << "Enter Sale : ";
	cin >> Sale ;
	cout << "Enter commissing : ";
	cin >> commissing;
	//************output**********
	cout << "name = " << name  << endl;
	cout <<"Total Revenue : "<< ((Sale * commissing) /100 + Salary) << "\tBath "<<endl;

	system ("pause");
	return(0);

}