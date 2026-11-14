#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<string, int> Students;

	Students["Mo"] = 90;
	Students["Ali"] = 80;
	Students["Ahmed"] = 70;

	cout << "\nPart 1 — Copy:\n";

	for (auto Pair : Students)
	{
		Pair.second += 10;
	}

	for (auto Pair : Students)
	{
		cout << Pair.second << endl;
	}

	cout << "\n***************************\n";
	cout << "\nPart 2 — Reference\n";

	for (auto& Pair : Students)
	{
		Pair.second += 10;
	}

	for (auto Pair : Students)
	{
		cout << Pair.second << endl;
	}

	cout << "\n***************************\n";

}