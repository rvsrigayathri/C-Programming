#include <stdio.h>
int main() {
    float salary, bonus = 0;
    char gender;

    scanf("%f %c", &salary, &gender);

    if (gender == 'M' || gender == 'm')
        bonus = 0.10 * salary;
    else if (gender == 'F' || gender == 'f')
        bonus = 0.12 * salary;

    printf("Final Salary = %.2f", salary + bonus);

    return 0;
}