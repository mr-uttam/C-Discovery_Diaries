#include<stdio.h>

int main(){
    int n, m;

    printf("Enter rows: ");
    scanf("%d", &n);

    printf("Enter columns: ");
    scanf("%d", &m);

    for(int i = 1; i <= n; i++){
        if(i == 1 || i == n){
            for(int j = 1; j <= m; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j = 2; j < m; j++){
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
