#include<stdio.h>

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int a = 65; // ASCII value of 'A'

        if(i % 2 != 0){
            for(int j = 1; j <= i; j++){
                printf("%d ", j);
            }
        }
        else{
            for(int j = 1; j <= i; j++){
                printf("%c ", a);
                a++;
            }
        }

        printf("\n");
    }

    return 0;
}
