#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void Allocate(T& first, T& last, T& pivot)
{
    pivot = first;
    T before = first;
    T after = first;
    T current = first;

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

template<typename T>
void quickSort(T first, T last)
{
    T pivot;

    Allocate(first, last, pivot);
    if (pivot != first)
        quickSort(first, pivot - 1);
    if (pivot != last)
        quickSort(pivot + 1, last);
	   
}

