#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello world";
    string target = "aeiou";

    string::size_type pos = str.find_first_not_of(target);

    while (pos != string::npos)
    {
        cout << pos << endl;
        str[pos] = '$';
        pos = str.find_first_not_of(target, pos + 1);
    }

    cout << str << endl;

    return 0;
}