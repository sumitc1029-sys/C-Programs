#include <stdio.h>

int main () {
    float first, second;
    int choice;
    printf("Enter your first number\n");
    scanf("%f", &first);
    printf("Enter second number\n");
    scanf("%f", &second);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Divide\n");
    
    printf("Enter Choice\n"),
    scanf("%d", &choice);

    switch(choice) {
        case 1:
        printf("Addition is : %.2f", first + second);
        break;

        case 2:
        printf("Subtraction is : %.2f", first - second);
        break;

        case 3:
        printf("Multiplication is : %.2f", first * second);
        break;

        case 4:
        printf("Divide is : %.2f", first / second);
        break;

        default:
        printf("Wrong Choice");
    

    }

    return 0;

}