#include <stdio.h>
int main() {
    int choice;

    printf("1. Milk Chocolate\n2. Dark Chocolate\n3. White Chocolate\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Milk Chocolate - Creamy taste. Enjoy!");
            break;
        case 2:
            printf("Dark Chocolate - Rich flavour. Enjoy!");
            break;
        case 3:
            printf("White Chocolate - Sweet and smooth. Enjoy!");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}