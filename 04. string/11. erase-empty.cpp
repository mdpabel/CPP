#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "learning c++ from udemy";
    // str.clear();

    // cout << str.length() << endl;
    // if (str.empty())
    //     cout << "String is empty";
    // else
    //     cout << "String is not empty";

    // str.erase(0, 9);
    str.erase(str.begin() + 5, str.end());
    cout << str << endl;

    return 0;
}