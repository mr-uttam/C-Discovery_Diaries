#include<stdio.h>

int main(){
    int i, a, n;

    printf("Enter the number: ");
    scanf("%d", &a);

    printf("Enter required times: ");
    scanf("%d", &n);

    for(i = 1; a > 0; i++){
        if (i <= n){
            printf("%d  ", a);
        }

        a = a - 3;
    }

    return 0;
}
