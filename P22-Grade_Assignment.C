#include<stdio.h>

int main(){
    int n;

    printf("Enter marks: ");
    scanf("%d", &n);

    if (n <= 100 && n >= 90) {
        printf("Excellent");
    }
    else if (n <= 89 && n >= 80) {
        printf("Very good");
    }
    else if (n <= 79 && n >= 70) {
        printf("Good");
    }
    else if (n <= 69 && n >= 60) {
        printf("You can do better");
    }
    else if (n <= 59 && n >= 50) {
        printf("Average");
    }
    else if (n <= 49 && n >= 40) {
        printf("Below Average");
    }
    else if (n < 40) {
        printf("Fail");
    }
    else {
        printf("Your data does not match");
    }	

    return 0;	
}
