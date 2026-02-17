#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);   

    while (num != 0) {  
        if (num % 2 == 0) {
            printf("%d is EVEN.\n", num);
        } else {
            printf("%d is ODD.\n", num);
        }

        scanf("%d", &num);   
    }

    printf("Program ended.");

    return 0;
}
