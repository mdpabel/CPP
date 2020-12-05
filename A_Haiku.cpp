#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> v;

    string str;
    while (getline(cin, str))
    {
        v.push_back(str);
    }

    regex vow("[aeiou]");

    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            string single = v[i].substr(j, 1);

            if (regex_match(single, vow))
            {
                count++;
            }
        }
    }

    if (count >= 17)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
