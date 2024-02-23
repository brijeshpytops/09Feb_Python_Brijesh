#include<stdio.h>

void main(){
    int score = -1;

    if (score <= 100 && score >= 0){
        if (score >= 80){
        printf("First-class");
        }
        else if (score >= 60){
            printf("Second-class");
        }
        else if (score >= 40){
            printf("Third-class");
        }
        else{
            printf("Sorry! You are failed"); // You are failed
        }
    } else{
        printf("Please Enter a valid score between 0 to 100.");
    }


}
