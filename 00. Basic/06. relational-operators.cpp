#include <iostream >

using namespace std;

int main()
{
    int a{10};
    int b{20};
    bool result;
    result = a < b;
    cout << "result " << result << endl;

    result = a < b;
    cout << "result " << result << endl;

    result = a > b;
    cout << "result " << result << endl;

    result = a <= b;
    cout << "result " << result << endl;

    result = a >= b;
    cout << "result " << result << endl;

    result = a == b;
    cout << "result " << result << endl;

    result = a != b;
    cout << "result " << result << endl;
}