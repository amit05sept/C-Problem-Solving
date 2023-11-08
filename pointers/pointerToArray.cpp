#include<bits/stdc++.h>
using namespace std;
int main() {
    int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int *atm = ar; // Pointer to integer
    
    int (*ptr)[10] = &ar; // Pointer to an array of 10 integers
    
    // Accessing elements using atm
    printf("First element (atm): %d\n", atm[0]); // Prints 1
    
    // Accessing elements using ptr
    printf("First element (ptr): %d\n", (*ptr)[0]); // Prints 1

    cout<<"\n"<< *(ptr);
    cout<<"\n"<< *(ptr+1);
    cout<<"\n"<< *(ptr+1) - *(ptr);

    cout<<"\n"<< *(atm);
    cout<<"\n"<< *(atm+1);
    cout<<"\n"<< *(atm+1) - *(atm);
    
    return 0;
}
