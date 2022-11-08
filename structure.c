/**                     //Documentation
 * file: age.c
 * author: you
 * description: program to find our age.
 */

#include <stdio.h> //Link

#define BORN 1993 // Definition

int age(int current); // Global Declaration

int main(void) // Main() Function
{
    int current = 2022;
    printf("Age: %d", age(current));
    return 0;
}

int age(int current)
{ // Subprograms
    return current - BORN;
}