
#include<stdio.h>
void main(){
    int x = 3;
    float y = 5.2;
    double z = 30.5;
    char a = 'A';
    printf("%d\n", sizeof(x)); // 4
    printf("%d\n", sizeof(y)); // 4
    printf("%d\n", sizeof(z)); // 8
    printf("%d\n", sizeof(a)); // 1

    printf("%x\n", &x); // address operator
}
