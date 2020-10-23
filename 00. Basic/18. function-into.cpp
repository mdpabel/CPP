#include <iostream>

using namespace std;

void func1()
{
    cout << "Func1" << endl;
}

void func2()
{
    func1();
    cout << "Func2" << endl;
}

int main()
{
    func2();
    cout << "Main function" << endl;
    return 0;
}
