#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    // string str = "10,20,30,40,50";

    // istringstream iss(str);

    // int k;
    // while (iss >> k)
    // {
    //     cout << k << endl;
    //     if (iss.peek() == ',')
    //     {
    //         iss.ignore();
    //     }
    // }

    string str = "A:10,B:20,C:30";

    istringstream iss(str);

    string k, p;
    while (getline(iss, k, ','))
    {
        istringstream issk(k);
        while (getline(issk, p, ':'))
        {
            cout << p << endl;
        }
    }

    return 0;
}