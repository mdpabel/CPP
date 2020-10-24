#include <iostream>

using namespace std;

void func(int *val1, int *val2)
{
    *val1 = *val1 + 10;
    *val2 = *val2 + 15;

    std::cout << "val1 : " << *val1 << std::endl;
    std::cout << "val2 : " << *val2 << std::endl;
}

int main()
{
    int a{10}, b{20};

    func(&a, &b);

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
}

/**
 * location p
 * content *p
 **/