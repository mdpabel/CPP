#include <bits/stdc++.h>

using namespace std;

void printMatched(string str, regex reg)
{
    smatch matched;

    while (regex_search(str, matched, reg))
    {
        cout << matched.str() << endl;
        cout << "Number of matched : " << matched.size() << endl;

        str = matched.suffix().str();
    }
}

int main()
{
    // ---------- MATCHING ZERO OR ONE ----------

    string str1 = "cat cats";
    regex reg1("[cat]+s?");
    // printMatched(str1, reg1);

    // * matches zero or more of what proceeds it
    string str2 = "doctor doctors doctor's";
    regex reg2("[doctor]+['s]{0,2}");
    // printMatched(str2, reg2);

    /********Problem ********/
    string str3 = "Just some words\n"
                  "and some more\r\n"
                  "and more\n";

    regex reg3("(\r)?(\n)");
    // string newStr3 = regex_replace(str3, reg3, " ");
    // cout << newStr3 << endl;

    // ---------- GREEDY & LAZY MATCHING ----------

    // Let's try to grab everything between <name> tags
    // Because * is greedy (It grabs the biggest match possible)
    // we can't get what we want, which is each individual tag
    // match
    string str4 = "<name>Life On Mars</name>"
                  "<name>Freaks and Geeks</name>";
    // regex reg4("<name>(.*)</name>");
    // printMatched(str4, reg4);

    // When we want to grab the smallest match we use *?, +?, or
    // {n,}? instead

    // regex reg5("<name>(.*?)</name>");
    // printMatched(str4, reg5);

    // ---------- WORD BOUNDARIES ----------

    // We use word boundaries to define where our matches start
    // and end

    // \\b matches the start or end of a word

    // If we want ape it will match ape and the beginning of apex
    string str6 = "ape at the apex";
    regex reg6("(ape)");
    // If we use a word boundary
    regex reg66("(\\bape\\b)");
    // printMatched(str6, reg66);

    // ---------- STRING BOUNDARIES ----------
    // ^ : Matches the beginning of a string if outside of
    //     a [ ]
    // $ : Matches the end of a string

    // Grab everything from the start to the @
    string str8 = "Match everything up to @";

    regex reg8("^.*[^@]");
    // printMatched(str8, reg8);

    // Grab everything from @ to the end of the line
    string str9 = "@ Get this string";
    regex reg9("[^@\\s].*$");
    // printMatched(str9, reg9);

    // Get just the numbers minus the area codes from
    // this string
    string str11 = "My number is 904-285-3700";
    regex reg11("(.{3})-(.*)-(.*)");
    smatch matches;
    if (regex_search(str11, matches, reg11))
    {
        for (int i = 1; i < matches.size(); i++)
        {
            cout << matches[i] << "\n";
        }
    }
    return 0;
}