#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<string, int>StudentGrades;

	StudentGrades["MO Agha"] = 100;
	StudentGrades["Ali Agha"] = 90;
	StudentGrades["Ahmed Agha"] = 99;
	StudentGrades["Omar Agha"] = 85;
	StudentGrades["Shahed Agha"] = 88;

	short i = 1;
	for (const pair<const string, int>& Pairs : StudentGrades)
	{
		cout << "\nStudent" << i << ": ";
		cout << "\nStudent Name  : " << Pairs.first;
		cout << "\nStudent Grade : " << Pairs.second;
		cout << "\n************************************\n";
		i++;
	}

	cout << "\nThe Number Of Student in MAP : " << StudentGrades.size();

	map<string, int>::iterator firstElement;

	firstElement = StudentGrades.begin();
	cout << "\n\nFirst Student in Map : ";
	cout << "\nStudent Name : " << firstElement->first;
	cout << "\nStudent Grade : " << firstElement->second;


	map<string, int>::reverse_iterator lastElement;

	lastElement = StudentGrades.rbegin();
	cout << "\n\nLest Student in Map : ";
	cout << "\nStudent Name : " << lastElement->first;
	cout << "\nStudent Grade : " << lastElement->second;

	cout << endl;

}