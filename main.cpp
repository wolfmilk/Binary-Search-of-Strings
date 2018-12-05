//*  Create a test program that primes the list with a set of strings, sorts the list, and then prompts the user to enter a search string. Your program should then search the list using your binary search algorithm to determine if the string is in the list.Allow the user to continue to search for strings until they choose to exit the program.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "SelectionSort.cpp"
#include "BinarySearch.cpp"
using namespace std;
// Function prototype
void SelectionSort(string [], int);
int BinarySearch(string [], int, string);
int nstring;
string str;
char choice;
string list[100];

int main()

{
    // Enter the strings
    cout<<"\n Please enter the number of strings:   ";
    cin>>nstring;
    for (int i=0;i<nstring;i++)
    {
        cout<<"\nPlease enter the string :   ";
        cin>>list[i];
    }
    //Sort a list by using SelectionSort function
    SelectionSort(list, nstring);
// search a string by using BinarySearch function
again:
    cout<<"\n Please enter a String:   ";
    cin>>str;
    
  if (BinarySearch(list,nstring,str))
     cout << "\n The string " << str << " found in string list : " ;
  else
      cout << "\n The string " << str<< " is not found in string list : ";
  //Allow the user to continue to search for strings or not.  by using goto
   cout << "\n Do you want to continue searching for another string y/n:  " ;
    cin>>choice;
    
   if (choice=='y')
      goto again;
    else if (choice=='n')
        return 0;
    
}
