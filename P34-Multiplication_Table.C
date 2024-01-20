#include<stdio.h>

int main(){
    int i, n, m;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++){
        m = n * i;
        printf("%d * %d = %d\n", n, i, m);
    }

    return 0;
}
