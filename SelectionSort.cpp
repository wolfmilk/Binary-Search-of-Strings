/* Write a version of the selection sort algorithm presented in the unit, which is used to search a list of strings.*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

inline void SelectionSort(string data[], int count)
{
    int i, j;
    string tmp;
    int minimum;
    for (i = 0; i < count - 1; i++)
    {
        minimum = i; /* current minimum */
        
        /* find the global minimum */
        for (j = i + 1; j < count; j++)
            if (data[minimum] > data[j])
                minimum = j; /* new minimum */
        
        /* swap data[i] and data[minimum] */
        tmp = data[i];
        data[i] = data[minimum];
        data[minimum] = tmp;
    }
    //return 0;
}
