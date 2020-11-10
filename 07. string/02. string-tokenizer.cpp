#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "HELLO I AM FROM BANGLADESH";

    char *str1;
    str1 = strtok(str, " ");

    while (str != NULL)
    {
        cout << str1 << endl;
        str1 = strtok(NULL, " ");
    }
}
