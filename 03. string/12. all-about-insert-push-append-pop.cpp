#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "learning c++ from udemy";

    str.push_back('.');
    cout << str << endl;

    str.pop_back();
    cout << str << endl;

    str.front() = 'L';
    cout << str << endl;

    str.back() = 'Y';
    cout << str << endl;

    str.insert(9, "Hello ");
    cout << str << endl;

    str.append(" Hello");
    cout << str << endl;

    return 0;
}