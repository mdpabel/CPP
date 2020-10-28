#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello world";
    string target = "aeiou";

    string::size_type pos = str.find_first_of(target);

    for (;;)
    {
        if (pos != string::npos)
        {
            if (str[pos] == 'a')
            {
                str[pos] = 'A';
            }
            else if (str[pos] == 'e')
            {
                str[pos] = 'E';
            }
            else if (str[pos] == 'i')
            {
                str[pos] = 'I';
            }
            else if (str[pos] == 'o')
            {
                str[pos] = 'O';
            }
            else if (str[pos] == 'u')
            {
                str[pos] = 'U';
            }
            pos = str.find_first_of(target, pos + 1);
        }
        else
        {
            break;
        }
    }
    cout << str << endl;

    return 0;
}