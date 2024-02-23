/*
DEC - > 3
2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
128 64  32  16  8   4   2   1
dec - > Bin
3 - > 0011
5 - > 0101
15 - > 1111
16 - > 10000
55 - > 110111


Bitwise AND (&): This operator performs a bitwise AND operation between the corresponding bits of two operands. The result bit is 1 if both corresponding bits are 1; otherwise, it's 0.

Bitwise OR (|): The bitwise OR operator performs a bitwise OR operation between the corresponding bits of two operands. The result bit is 1 if at least one of the corresponding bits is 1.

Bitwise XOR (^): The bitwise XOR operator performs a bitwise XOR (exclusive OR) operation between the corresponding bits of two operands. The result bit is 1 if the corresponding bits are different; otherwise, it's 0.

Bitwise NOT (~): This is a unary operator that performs a bitwise NOT operation on its operand, flipping all bits (1s become 0s, and 0s become 1s).

Left Shift (<<): The left shift operator shifts the bits of the left operand to the left by a number of positions specified by the right operand. It effectively multiplies the left operand by 2 raised to the power of the right operand.

Right Shift (>>): The right shift operator shifts the bits of the left operand to the right by a number of positions specified by the right operand. It effectively divides the left operand by 2 raised to the power of the right operand, discarding the remainder.
*/
#include<stdio.h>

void main(){
    int x = 3, y = 5, z, a=7;
    // z = x & y;
    // z = x | y;
    // z = x ^ y;
    // z = ~ x;
    // a = a << 1; // 14
    // a = a << 3; // 112

    // a = a >> 1; // 3


    printf("%d", a);
}

/*
x = 3 0011
y = 5 0101
z = x & y 0001
z = x | y 0111
z = x ^ y 0110
z = ~ x 1100 (-4)


*/
