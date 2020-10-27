#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string str = "Hello";

    // string::iterator it = str.begin();

    // while (it < str.end())
    // {
    //     if (*it >= 'a' && *it <= 'z')
    //     {
    //         *it -= 32;
    //     }

    //     it++;
    // }

    // cout << str << endl;

    string str = "Hello";

    string::reverse_iterator rit = str.rbegin();

    while (rit < str.rend())
    {
        cout << *rit;
        rit++;
    }

    return 0;
}