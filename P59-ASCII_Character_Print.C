#include<stdio.h>

int main(){
    for(int i = 65; i <= 145; i++){
        printf("%d ", i);

        char ch = (char)i;
        printf("%c\n", ch);
    }

    return 0;
}
