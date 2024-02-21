
// Logical operators
#include<stdio.h>

void main(){


    // A B C && ||
    // T T T T  T
    // F T T F  T
    // T F T F  T
    // T T F F  T
    // F F F F  F


    // A !
    // T F
    // F T

    int a = 10, b = 20, x,y,z, p;

    x = a < b;
    y = 1;
    z = 0;

    // p = x && y; // True
    // p = x && y && z; // False
    // p = x && y || z; // True
    // p = x || y || z; // True
    // p = !z; // True
    // p = !y; // False
    printf("%d", p);

}

