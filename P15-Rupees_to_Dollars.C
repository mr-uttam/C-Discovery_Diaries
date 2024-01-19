
#include<stdio.h>

int main(){
    int n;

    printf("Enter Rupees: ");
    scanf("%d", &n);

    int dollars = n * 83;

    printf("%d Rupees = %d Dollar", n, dollars);

    return 0;
}
