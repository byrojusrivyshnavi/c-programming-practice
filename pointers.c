#include <stdio.h>
int main()
{
    int a = 10; //Declare an integer variable
    int *p = &a; //Declare a pointer and store the address of 'a'

    printf("value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer p holds address: %p\n", p);
    printf("value at pointer p: %d\n", *p); //Dereferencing
    return 0;
}