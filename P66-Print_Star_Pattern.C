#include<stdio.h>

int main(){
    int n;
    char star = '*';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", star);
        }
        printf("\n");
    }

    return 0;
}
