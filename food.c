#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 0) {
        printf("Invalid age");
    }
    else if(age <= 5) {
        printf("Mashed vegetables or soft fruits");
    }
    else if(age <= 12) {
        printf("Rice, vegetables, milk");
    }
    else if(age <= 18) {
        printf("Burgers or pasta");
    }
    else if(age <= 50) {
        printf("Balanced diet with fruits and protein");
    }
    else {
        printf("Soup or grilled fish");
    }
    return 0;
}