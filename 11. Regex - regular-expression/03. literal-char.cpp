#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "The best things in life are free a ba";
    regex reg("\\ba\\b");

    smatch matched;

    while (regex_search(str, matched, reg))
    {
        cout << matched.str() << endl;
        str = matched.suffix().str();
    }

    return 0;
}