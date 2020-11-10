#include <bits/stdc++.h>

using namespace std;

// void printMatches(string str, regex reg)
// {
//     sregex_iterator currentMatch(str.begin(), str.end(), reg);

//     sregex_iterator lastMatch;

//     while (currentMatch != lastMatch)
//     {
//         smatch match = *currentMatch;
//         cout << match.str() << endl;
//         currentMatch++;
//     }
//     cout << endl;
// }

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
    string str = "the ape was at the apex";

    // Create the pattern to search for which is
    // the letters ape followed maybe by anything
    // that is not a space
    regex reg("(ape[^ ]?)");
    // printMessage(str, reg);

    // ----- ITERATOR REGEX -----
    string str1 = "i picked the pickle";
    // Match (+) 1 or more of anything not a space
    regex reg1("(pick([^ ]+)?)");
    // printMessage(str1, reg1);

    //  // ----- MATCH 1 OF SEVERAL LETTERS -----
    string str2 = "Cat rat mat fat pat";

    // Match any character in [] plus what follows
    regex reg2("([crmfp]at)");
    // printMessage(str2, reg2);

    // We can also match characters in a range
    regex reg3("[C-Fc-f]at");
    // printMessage(str2, reg3);

    // Use ^ to denote any character except for
    // those in brackets
    regex reg4("[^Cr]at");
    // printMessage(str2, reg4);

    return 0;
}