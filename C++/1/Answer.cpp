#include<iostream>
using namespace std;

// This is my first OOP problem solving
class Employee {
	public:
		int id;
		string name;
		double age;
};
int main(){
	Employee e;

	cout<<"Please Enter Your ID: ";
	cin>>e.id;
	
	cout<<"Please Enter Your Name: ";
	cin>>e.name;
	
	cout<<"Please Enter Your Age: ";
	cin>>e.age;

	cout  << "Your name is  " << e.name << " your are " << e.age << "  years old  " << " and your id number  " << e.id ;

	return 0;
	
}
