#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string name = "Pabel";
    int age = 23;

    ostringstream oss;
    oss << name << ":" << age;

    string str = oss.str();

    cout << str << endl;
    return 0;
}