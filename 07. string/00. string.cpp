#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello world.";
    string str2 = "Something";
    char str3[] = {};

    // Iterators:
    for (auto i = str.begin(); i < str.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = str.rbegin(); i < str.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Capacity:
    // str.clear();
    cout << str.length() << " or " << str.size() << endl;
    cout << str.empty() << endl;

    // Element access:
    cout << str.at(0) << endl;
    str.back() = '!';
    cout << str << endl;
    str.front() = 'M';
    cout << str << endl;

    // Modifiers:
    str.append(" Learning c++");
    cout << str << endl;
    str.push_back('!');
    cout << str << endl;
    str.insert(6, "added ");
    cout << str << endl;
    str.erase(6, 6);
    cout << str << endl;
    str.replace(str.begin(), str.begin() + 5, "Hello");
    cout << str << endl;
    str.swap(str2);
    cout << "str = " << str << endl;
    cout << "str2 = " << str2 << endl;
    str2.pop_back();
    cout << "str2 = " << str2 << endl;

    // copy
    // size_t length = str.copy(str3, 6, 5);
    // str3[length] = '\0';
    // cout << str3 << endl;

    int n = str2.find("world");
    cout << n << endl;
    int m = str2.find_first_of("w");
    cout << m << endl;
}
