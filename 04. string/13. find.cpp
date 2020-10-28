#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Lorem ipsum dolor sit amet,Lorem ipsum dolor sit amet,Lorem ipsum dolor sit amet,Lorem ipsum dolor sit amet,Lorem ipsum dolor sit amet,";

    string::size_type index = str.find("ipsum");

    while (index != string::npos)
    {
        cout << index << endl;
        index = str.find("ipsum", index + 1);
    }

    return 0;
}