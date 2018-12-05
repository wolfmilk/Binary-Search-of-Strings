//* Write a version of the binary search algorithm presented in the unit, which isused to search a list of strings. (Use the selection sort that you designed above to sort the list of strings.)
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

inline int BinarySearch(string array[], int len, string searchItem)
{
    
    int first = 0;
    int last = len - 1;
    int mid = 0;
    bool found = false;
    while (first <= last && !found)
    {
        mid = (first + last) /2;
        if (array[mid] == searchItem)
            found = true;
        else if (array[mid] > searchItem)
            last = mid -1;
        else
            first = mid + 1;
    }
    
    return found;
}
    
