#include <bits/stdc++.h>

/**
 * matching a character in list of sequential 
 * characters by using the dash to indicate a character range. 
 * For example, the pattern [0-6] will only match any single digit character from zero to six, 
 * and nothing else. And likewise, [^n-p] will only match any single character 
 * except for letters n to p.
 * 
 * this is the alphanumeric \w metacharacter which is 
 * equivalent to the character range [A-Za-z0-9_]
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
    string str = "Ana aax bby ccz Bob Cpc";

    regex reg("[A-C][n-p][a-c]");
    printMessage(str, reg);
    return 0;
}