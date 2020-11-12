#include <bits/stdc++.h>

/**
 * excludes specific characters using the square brackets and the ^ (hat)
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
    string str = "hog dog bog";

    regex reg("[^b]og");
    printMessage(str, reg);
    return 0;
}