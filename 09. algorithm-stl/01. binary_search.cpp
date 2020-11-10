// regex_match example
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 30, 30, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cin >> key;

    bool present = binary_search(arr, arr + n, key);

    if (present)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    // lower bound :- item >= key

    auto lb = lower_bound(arr, arr + n, key);
    int lb_index = lb - arr;
    cout << lb_index << endl;

    // upper bound :- item > key;
    auto ub = upper_bound(arr, arr + n, key);
    int ub_index = ub - arr;
    cout << ub_index << endl;

    // freq of element /  number of element
    int freq = ub_index - lb_index;
    cout << freq << endl;

    return 0;
}