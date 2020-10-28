#include <iostream>

using namespace std;

int sum(int, int = 2); // int sum(int, int);

int main()
{
    int result = sum(10);
    cout << result << endl;
}

int sum(int a, int b) // or int sum(int a, int b = 2)
{
    return a + b;
}