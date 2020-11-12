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

    // ----- REPLACE MATCHES -----
    regex reg5("[Cr]at");
    // string owlFood = regex_replace(str2, reg5, "owl");
    // cout << owlFood << endl;

    // ----- MATCHING ANY CHARACTER -----
    string str7 = "F.B.I. I.R.S. CIA";
    // regex reg7("([^ ]\..\..\..)");
    // printMessage(str7, reg7);

    // ----- MATCHING WHITESPACE -----
    // string str8 = "This is a\n multiline string\n"
    //               "that has many lines";

    string str8 = "This is a multiline string that has many lines";
    regex reg8("( )");
    // string newStr8 = regex_replace(str8, reg8, "\n");
    // cout << newStr8 << endl;
    // we can also replace
    // \b : Backspace
    // \f : Form Feed
    // \r : Carriage Return
    // \t : Tab
    // \v : Vertical Tab

    // ----- MATCHING SINGLE NUMBERS -----
    // \d can be used instead of [0-9]
    // \D is the same as [^0-9]

    string str9 = "123456";
    regex reg9("\\d");
    // printMessage(str9, reg9);

    // we can also match within a range
    string str10 = "123 12345 123456 1234567";
    // Match values that are between 5 and 7 digits
    regex reg10("\\d{5,7}");
    // printMessage(str10, reg10);

    // ----- MATCHING ANY SINGLE LETTER OR NUMBER -----
    // \w is the same as [a-zA-Z0-9_]
    // \W is the same as [^a-zA-Z0-9_]

    string str11 = "412-555-1212";
    regex reg11("\\w{3}-\\w{3}-\\w{4}");
    // printMessage(str11, reg11);

    // ----- MATCHING WHITESPACE -----

    // \s is the same as [\f\n\r\t\v]
    // \S is the same as [^\f\n\r\t\v]

    string str12 = "Toshio Muramatsu";
    regex reg12("\\w{5,20}\\s\\w{5,20}");
    // printMessage(str12, reg12);

    // ----- MATCHING ONE OR MORE -----
    string str13 = "a as ape bug";
    //// Match a followed by 1 or more characters
    // regex reg13("a[\\w]+");
    regex reg13("a[a-z]+");
    // printMessage(str13, reg13);

    // ----- END MATCHING ONE OR MORE -----

    // ----- PROBLEM -----
    // Create a Regex that matches email addresses
    // from a list
    // 1. 1 to 20 lowercase and uppercase letters,
    // numbers, plus ._%+-
    // 2. An @ symbol
    // 3. 2 to 20 lowercase and uppercase letters,
    // numbers, plus .-
    // 4. A period
    // 5. 2 to 3 lowercase and uppercase letters

    std::string str14 = "db@aol.com m@.com @apple.com db@.com";

    // std::regex reg14("[\\w._%+-]{1,20}@[\\w.-]{2,20}.[A-Za-z]{2,3}");
    // printMessage(str14, reg14);

    return 0;
}