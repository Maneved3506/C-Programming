#include <stdio.h>

int main() {
    int age;
    printf("Enter the Age :");
    scanf("%d",&age);

    if (age > 18) {
        printf("You are Eligible for Driving License");
    }
  	else {
        printf("You are not Eligible for Driving License");
    }

    return 0;
}