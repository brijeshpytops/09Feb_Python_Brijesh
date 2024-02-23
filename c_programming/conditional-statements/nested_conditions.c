#include<stdio.h>

void main(){
    int age;
    float weight;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("Enter your Weight: ");
        scanf("%f", &weight);
        if (weight >= 50){
            printf("Your age is : %d\n", age);
            printf("Your weight is : %.2f\n", weight);
            printf("You can donate");
        }else{
            printf("You can not donate because your weight is %.2f(<=50)", weight);
        }
    }else{
        printf("You can not donate because of your age is %d(<=18)", age);
    }
}
