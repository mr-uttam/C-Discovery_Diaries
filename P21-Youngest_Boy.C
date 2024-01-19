
#include<stdio.h>

int main(){
    int a, b, c;

    printf("The age of Ram: ");
    scanf("%d", &a);

    printf("The age of Shyam: ");
    scanf("%d", &b);

    printf("The age of Madhu: ");
    scanf("%d", &c);

    if (a < b && a < c) {
        printf("The youngest boy is Ram");
    }
    else if (b < a && b < c) {
        printf("The youngest boy is Shyam");
    }
    else {
        printf("The youngest boy is Madhu");
    }

    return 0;
}
