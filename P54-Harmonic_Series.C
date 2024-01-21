#include<stdio.h>
#include<math.h>

int main(){
    float n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%f", &n);

    for(i = 1; i <= n; i++){
        sum += 1 / pow(i, 2);
    }

    printf("%f", sum);

    return 0;
}
