#include<stdio.h>

int main() {
    int x, y, z, w, v;

    for (int i = 1; i <= 500; i++) {
        x = i % 10;
        y = i % 100;
        z = (y - x) / 10;
        w = i % 1000;
        v = (w - y) / 100;

        if (z * z * z + x * x * x + v * v * v == i) {
            printf("%d is an Armstrong number\n", i);
        } else {
            printf("%d is not an Armstrong number\n", i);
        }
    }

    return 0;
}
