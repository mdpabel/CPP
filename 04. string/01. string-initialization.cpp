#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("Hello World");
    cout << str << endl;
    cout << str.length() << endl;

    str = "Changed string";
    cout << str << endl;
    cout << str.length() << endl;

    string str2(9, '@');
    cout << str2 << endl;
    cout << str2.length() << endl;
}