#include "quickSort.h"

void Allocate(vector<int>::iterator& first, 
                vector<int>::iterator& last, vector<int>::iterator& pivot)
{
    pivot = first;
    vector<int>::iterator before = first;
    vector<int>::iterator after = first;
    vector<int>::iterator current = first;

    while (current <= last)
    {
        if (*current > *pivot)
        {
            after = current;
            break;
        }
        else 
            before = current;

        ++current;
    }

    int dummy;
    while (current <= last)
    {
        if (*current <= *pivot)
        {
            dummy = *after;
            *after = *current;
            *current = dummy;
            ++before;
            ++after;
        }
        if (current == last)
            last = current;
        ++current;
    }

    dummy = *pivot;
    *pivot = *before;
    *before = dummy;

    first = pivot;
    pivot = before;
};

void quickSort(vector<int>::iterator first, vector<int>::iterator last)
{
    vector<int>::iterator pivot;

    Allocate(first, last, pivot);
    if (pivot != first)
        quickSort(first, pivot - 1);
    if (pivot != last)
        quickSort(pivot + 1, last);
	   
}
