#include <bits/stdc++.h>

/**
 */

using namespace std;

void printMessage(string str, regex reg)
{
    smatch matches;

    while (regex_search(str, matches, reg))
    {
        // Number of matches
        cout << "Number of matches : " << matches.size() << endl;
        cout << matches.str() << endl;
        // element the previous matches and create new match to search!
        str = matches.suffix().str();

        cout << endl;
    }
}

int main()
{
    string str = "1 file found?	 12 file found?	 122 file found?	 no file found ";

    regex reg("\\d+ files? found\\?");
    printMessage(str, reg);
    return 0;
}