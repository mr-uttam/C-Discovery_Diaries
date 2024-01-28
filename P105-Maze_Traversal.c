#include <stdio.h>

int maze(int cr, int cc) {
    if (cr == 1 || cc == 1) {
        return 1;
    }
    
    int totalWays = maze(cr - 1, cc) + maze(cr, cc - 1);
    return totalWays;
}

int main() {
    int rows, columns;
    
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &columns);
    
    printf("%d", maze(rows, columns));
    
    return 0;
}
