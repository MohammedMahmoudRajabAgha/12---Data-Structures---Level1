#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int, string>students;

	students[701] = "Ali Agha";
	students[702] = "Omar Agha";
	students[703] = "Saleh Agha";
	students[704] = "Koko Afha";
	students[705] = "LOLO Agha";

	
	map<int, string>::iterator firstElement;

	firstElement = students.begin();

	cout << "First Element :";
	cout << firstElement->first << endl;
	cout << firstElement->second << endl;

	firstElement++;
	cout << "Second Element :";
	cout << firstElement->first << endl;
	cout << firstElement->second << endl;

	cout << "\n*********************\n";
	cout << "\n*********************\n";

	map<int, string>::iterator FE = students.begin();

	for (short i = 0; i < students.size(); i++)
	{
		cout << FE->first << endl;
		cout << FE->second << endl;
		cout << "\n*********************\n";
		FE++;
	}

}