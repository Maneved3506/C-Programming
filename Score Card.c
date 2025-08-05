#include <stdio.h>

int main() {
    int score;
    printf("Enter the Score");
    scanf("%d",&score);

    if (score >= 90) {
        printf("Grade: A+\n");
    } else if (score >= 80) {
        printf("Grade: A\n");
    } else if (score >= 70) {
        printf("Grade: B+\n");
    } else if (score >= 60) {
        printf("Grade: B\n");
    }else if (score >= 50) {
        printf("Grade: C+\n");
    }else if (score >= 40) {
        printf("Grade: C\n");
    }else {
        printf("You are Fail!!!\n");
    }

    return 0;
}