#include <bits/stdc++.h>

/**
* regex_search: Attempts to match a regular expression to any part 
* of a character sequence. (function template)
 */

using namespace std;

int main()
{
    string s = "I am looking for GeeksForGeek \n";

    regex reg("Geeks[a-zA-Z]*");

    string result = regex_replace(s, reg, "Replaced");
    cout << result;

    return 0;
}