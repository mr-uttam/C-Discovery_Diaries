
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0) {
        printf("This number is divisible by 5 and 3");
    }
    else if (n % 5 != 0 && n % 3 != 0) {
        printf("This number is not divisible by 5 and 3");
    }
        printf("This number is divisible by 3 but not divisible by 5");
    }
    else {
        printf("This number is divisible by 5 but not divisible by 3");
    }

    return 0;
}
