#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;   // stored in stack
    int *ptr = new int();   // dynamic allocation of memory in heap
    *ptr = 10;
    delete(p);   // dynamically deallocation of memory from heap

    // now ptr will be dangling pointer as it is pointing to a memory allocation which has no value

    ptr = new int[4];   // storing array of size 4 and the ptr is pointing this array
    delete[]ptr;   // deleting the array pointer
    ptr=NULL;   // removing ptr also

    return 0;


    // memory leap is a situation when we dynamically allocate a memory but after it's use does not deallocate it
}