#include "quickSort.h"

int main()
{
    vector<int> vec = {5, 7, 3, 6, 1, 9, 4, 0, 2, 10, 3, 15, 4, 25, 2};
    vector<int>::iterator getLast = vec.begin();
    while (getLast + 1 != vec.end())
    {
        ++getLast;
    }

    vector<int>::iterator getFirst = vec.begin();

    for (auto a : vec)
    {
        cout << a << " ";
    }
    cout << endl;

    vector<int>::iterator voidIter;
    quickSort(getFirst, getLast);
    for (auto a : vec)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}
