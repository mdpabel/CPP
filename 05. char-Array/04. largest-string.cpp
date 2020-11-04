#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[1000];
    char largestA[1000];

    int len = 0;
    int largest_len = 0;

    cin.get();

    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);

        len = strlen(a);
        if (len > largest_len)
        {
            largest_len = len;
            strcpy(largestA, a);
        }
    }

    cout << largestA << " length is : " << largest_len << endl;

    return 0;
}