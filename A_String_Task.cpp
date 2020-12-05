#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    vector<string> v;

    regex vow("[aoyeui]");

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (int i = 0; i < str.length(); i++)
    {
        string single = str.substr(i, 1);

        if (regex_match(single, vow) == false)
        {
            v.push_back(single);
        }
    }

    for (auto u : v)
    {
        cout << "." << u;
    }

    return 0;
}

/**
deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
*/