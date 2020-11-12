#include <bits/stdc++.h>

/**
 * 0 or more *
 * 1 or more +
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
    string str = "Mission: successful"
                 "Last Mission: unsuccessful	To be completed"
                 "Next Mission: successful upon capture of target";

    regex reg("^Mission: successful$");
    printMessage(str, reg);
    return 0;
}