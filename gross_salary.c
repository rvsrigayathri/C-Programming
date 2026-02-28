#include <stdio.h>
int main() {
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if(basic <= 70000) {
        hra = 0.30 * basic;
        da = 0.80 * basic;
    }

    gross = basic + hra + da;

    printf("Gross salary = %.2f", gross);
    return 0;
}