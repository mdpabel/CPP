#include <bits/stdc++.h>

/**
* regex_search: Attempts to match a regular expression to any part 
* of a character sequence. (function template)
 */

using namespace std;

int main()
{
    string str = "GeeksForGeeks";

    regex reg("Geeks\\w*");
    smatch matches;

    regex_search(str, matches, reg);

    for (auto x : matches)
    {
        cout << x << endl;
    }

    // cout << matches.str << endl;

    return 0;
}