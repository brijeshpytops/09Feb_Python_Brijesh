#include<stdio.h>

void main(){
    int num = 11;

    for(int i = 0; i<=num; i++){
        if (i == 2){
            continue;
        } else if (i == 5){
            break;
        }
        printf("%d\n", i);
    }
}
