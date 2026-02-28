#include <stdio.h>
int main() {
    int angle;
    printf("Enter angle: ");
    scanf("%d", &angle);

    if(angle == 0)
        printf("East");
    else if(angle == 90)
        printf("North");
    else if(angle == 180)
        printf("West");
    else if(angle == 270)
        printf("South");
    else
        printf("Invalid angle");

    return 0;
}