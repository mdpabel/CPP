#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";
    string target = "WUB";
    string::size_type pos = str.find(target);

    while (pos != string::npos)
    {
        str.replace(pos, target.length(), " ");
        pos = str.find(target, pos + 1);
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[0] == ' ')
        {
            str.erase(str.begin());
        }
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }
    }

    cout << str;
}
