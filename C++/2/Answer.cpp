#include<bits/stdc++.h>
using namespace std;

class Employee 
{
	public :
		string  name ;
		int number ;

		bool Validate_Name(string name)
		{
			int n = name.size();
			if(n > 5) 
			{
				return true;
			}
			else 
			{
				cout <<  "Invalid name " ;
				return false;
			}

		}

		bool Validate_Number(int num )
		{
			if(num > 5) 
			{
				return true;
			}
			else 
			{
				cout << "Invalid number " ;
				return false;
			}
		}
};

int main()
{
	//ios_base ::sync_with_stdio(false),cin.tie(0),cout.tie(0);

	Employee  e ;

	cout << "Enter Employee name : ";
	cin >> e.name ;

	cout << "Enter Numbers of Employee : ";
	cin >> e.number ;

//	e.Validate_Name(e.name);
//	e.Validate_Number(e.number);

	
	// Here first check the name & return it value Then check the number & return it's value 
	if(e.Validate_Name(e.name) && e.Validate_Number(e.number))
	{
		// If ALL DATA ARE VALIDE PRINT IT 
		cout << "Name is " << e.name << " Number of Employee " << e.number;
	}


}
