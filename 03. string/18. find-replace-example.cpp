#include <iostream>
#include <string>

using namespace std;

void find_and_replace(string &str, string target, string replace)
{
    // replace all occurences of the target string in str with replace string. Please read the problem statement first.
    // You will need to use find, replace string::npos in your code, you will need a loop as you will need to
    // go on iterating until no more target string found in str.

    string::size_type pos = str.find(target);

    while (pos != string::npos)
    {
        str.replace(pos, target.length(), replace);
        pos = str.find(target, pos + replace.length());
    }
}