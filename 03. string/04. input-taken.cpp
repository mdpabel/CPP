#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "What is your name : ";
    // cin >> str;
    getline(cin, str);

    cout << "your name is " << str << endl;
}