#include<iostream>
#include<string>
using namespace std;

// To See The Diff Between (union) and (struct) Replace (unoin) -> (struct)
union MyUnion
{
	short unsigned shortValue;
	float floatValue;
	char charValue;
};

int main()
{
	MyUnion myUnion;
	
	myUnion.shortValue = 10;
	cout << "\nIinteger Value : " << myUnion.shortValue;//Active Member = .shortValue


	myUnion.floatValue = 45.6f;
	cout << "\nFloat Vlaue : " << myUnion.floatValue;//Active Member = .floatValue

	myUnion.charValue = 'M';
	cout << "\nChar Valuen : " << myUnion.charValue;//Active Member = .charValue


	cout << "\n*******************";
	cout << "\nIinteger Value : " << myUnion.shortValue;//Undefined Behavior
	cout << "\nFloat Vlaue    : " << myUnion.floatValue;//Undefined Behavior
	cout << "\nChar Valuen    : " << myUnion.charValue;// M

	cout << "\n*******************";
	cout << "\nIinteger Value : " << &myUnion.shortValue; //The Same Address For All Members
	cout << "\nFloat Vlaue    : " << &myUnion.floatValue;//The Same Address For All Members
	cout << "\nChar Valuen    : " << (void*) & myUnion.charValue;//The Same Address For All Members

	cout << "\n*******************";
	cout << "\nObject                : " << sizeof(myUnion);// it equal to The biggest Memory Space in Union -> sizeof(myUnion)=sizeof(myUnion.floatValue)
	cout << "\nIinteger Memore Space : " <<sizeof(myUnion.shortValue);// 2 Bytes
	cout << "\nFloat Memore Space    : " << sizeof(myUnion.floatValue);// 4 Bytes
	cout << "\nChar Memore Space     : " << sizeof(myUnion.charValue);// 1 Byte

	

	return 0;
}