#include <bits/stdc++.h>

/**
 * [] -> Matching specific characters, by defining them inside square brackets.
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
    string str = "can man dan pan ran fan";

    regex reg("[cpf]an");
    printMessage(str, reg);
    return 0;
}