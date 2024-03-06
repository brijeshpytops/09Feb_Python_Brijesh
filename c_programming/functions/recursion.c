/*
recursion is a technique in programming where a function calls itself directly or indirectly. In C programming, recursion is achieved by defining a function that calls itself within its own definition. Here's an example of a recursive function to calculate the factorial of a number:
*/

#include <stdio.h>

int fact(int num){
    if (num <= 1){
        return 1;
    } else {
        return num * fact(num - 1);
    }
    
}

int main() {
     printf("%d", fact(4));
    return 0;
}