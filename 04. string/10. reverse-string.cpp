#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter any string : ";
    getline(cin, str);
    cout << str << endl;

    string ::reverse_iterator rit = str.rbegin();

    while (rit < str.rend())
    {
        cout << *rit;
        ;
        ++rit;
    }

    return 0;
}