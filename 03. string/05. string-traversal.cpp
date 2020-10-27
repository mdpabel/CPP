#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello World";

    // for (int i = 0; i < str.length(); i++)
    // {
    //     // cout << str[i] << ",";
    //     cout << str.at(i) << ",";
    // }
    for (char &p : str)
    {
        cout << p << ",";
    }
}