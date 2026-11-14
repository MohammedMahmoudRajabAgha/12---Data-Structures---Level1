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

	cout << "\nPlease Enter Student ID ? ";
	int ID;
	cin >> ID;

	auto it = students.find(ID);

	if (it != students.end())
	{
		cout << "\nStudent Name : " << students[ID] << endl;
	}

	else
	{
		cout << "\nStudent Not Found!";
	}

	string Name = students[999];

	cout << "\nStudent Name : " << Name << endl; //Empty

}