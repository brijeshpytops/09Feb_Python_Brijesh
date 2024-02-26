// for loop
// https://www.rapidtables.com/code/text/ascii-table.html
#include<stdio.h>

void main(){
    int start = 1, end = 26;
    for(start; start <= end; start++){
        printf("%c\n", start + 96);
    }
}
