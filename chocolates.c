#include <stdio.h>
int main() {
    int total, perDay, days;

    printf("Total chocolates: ");
    scanf("%d", &total);
    printf("Chocolates per day: ");
    scanf("%d", &perDay);
    printf("Planned days: ");
    scanf("%d", &days);

    if(perDay * days <= total)
        printf("1");   // Will last
    else
        printf("0");   // Will run out

    return 0;
}