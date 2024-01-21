#include<stdio.h>
#include<math.h>

int main(){
    float n, i, sum = 0, a = 1;

    printf("Enter a number: ");
    scanf("%f", &n);

    for(i = 1; i <= n; i++){
        if(a > n){
            break;
        }

        sum += a / pow(i, 2);

        a += 2;
    }

    printf("%f", sum);

    return 0;
}
