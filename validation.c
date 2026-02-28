#include <stdio.h>
int main() {
    int age;
    float price;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 0) {
        printf("Invalid age");
    }
    else if(age <= 12) {
        price = 100;
        printf("Child Ticket = Rs %.2f", price);
    }
    else if(age <= 19) {
        price = 150;
        printf("Teenager Ticket = Rs %.2f", price);
    }
    else if(age <= 60) {
        price = 200;
        printf("Adult Ticket = Rs %.2f", price);
    }
    else {
        price = 120;
        printf("Senior Ticket = Rs %.2f", price);
    }
    return 0;
}