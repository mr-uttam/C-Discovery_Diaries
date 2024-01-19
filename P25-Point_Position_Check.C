
#include<stdio.h>

int main(){
    int x, y;

    printf("Enter the coordinates (x, y): ");
    scanf("%d%d", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point is at the origin");
    }
    else if (x == 0 && y != 0) {
        printf("The point is on the y-axis");
    }
    else if (x != 0 && y == 0) {
        printf("The point is on the x-axis");
    }
    else {
        printf("The point is not on the x or y axis");
    }

    return 0;
}
