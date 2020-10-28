#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "this is what i do like most!";
    string target;
    cout << "Enter the target string : ";
    getline(cin, target);
    string::size_type pos = str.find(target);
    string substring = str.substr(pos, target.length());

    cout << "position : " << pos << endl;
    cout << substring << endl;
    return 0;
}