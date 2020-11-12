#include <bits/stdc++.h>

/**
 * regex_match: Attempts to match a regular expression to an entire character sequence
 */

using namespace std;

int main()
{
    string str = "GeeksForGeeks";

    regex reg("Geek.*");

    if (regex_match(str, reg))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}