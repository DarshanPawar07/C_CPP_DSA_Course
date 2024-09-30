   
       /* Que 1 - Define a class DynArray to implement dynamic array data structure with member variables
                  to store capacity of array, last index of the last filled block of the array and a pointer 
                  to hold the address of the first block of the dynamically created array. */

       #include<stdio.h>
       #include<iostream>
       using namespace std;


       class DynArray
          {
               private:
                   int capacity;
                   int last_index;
                   int *p;

          };