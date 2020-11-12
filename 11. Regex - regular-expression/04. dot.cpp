#include <bits/stdc++.h>

/**
 * . ->  . can match any single character (letter, digit, whitespace, everything).
 * \. -> to match dot
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
    string str = "cat. 896. ?=+. abc1";

    regex reg("(...1)");
    printMessage(str, reg);
    return 0;
}