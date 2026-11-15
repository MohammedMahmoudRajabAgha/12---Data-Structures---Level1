#include <iostream>
#include <string>
using namespace std;

union MyUnion
{
    short shortValue;
    float floatValue;
    string stringValue;

    MyUnion() {}

    ~MyUnion() {}
};

int main()
{
    MyUnion myUnion;

    // Activate shortValue
    myUnion.shortValue = 10;

    cout << myUnion.shortValue << endl;

    // Destroy shortValue is unnecessary (fundamental type)

    // Activate stringValue
    new (&myUnion.stringValue) string("Mohammed");

    cout << myUnion.stringValue << endl;

    // Destroy stringValue
    myUnion.stringValue.~basic_string();

    return 0;
}