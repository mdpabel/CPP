#include <iostream>
#include <typeInfo>

using namespace std;

int main()
{
    int m = 10;
    cout << "m : " << m << endl;
    double n{10.1};
    cout << "n : " << n << endl;
    float x{11.11};
    cout << "x : " << x << endl;
    auto z{100};
    cout << "type of z : " << typeid(z).name() << endl;
    auto g{10.10};
    cout << "type of g : " << typeid(g).name() << endl;
    auto c{11.1};
    cout << "type of c : " << typeid(c).name() << endl;
    signed v = 100;
    cout << "v : " << v << endl;

    return 0;
}