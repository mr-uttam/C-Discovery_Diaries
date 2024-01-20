#include<stdio.h>

int main(){
    int r, volume;

    printf("Enter the radius of a sphere: ");
    scanf("%d", &r);
    
    volume = (4 * 3.14 * r * r * r) / 3;
    
    printf("Volume of the sphere: %d", volume);

    return 0;
}
