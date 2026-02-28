#include <stdio.h>
int main() {
    int age;
    float tuition, expense;

    scanf("%d %f %f", &age, &tuition, &expense);

    if (age >= 18 && age <= 25) {
        if (tuition > expense)
            printf("Tuition is higher");
        else if (tuition < expense)
            printf("Expenses are higher");
        else
            printf("Both are equal");
    } else {
        printf("Age not in range");
    }

    return 0;
}