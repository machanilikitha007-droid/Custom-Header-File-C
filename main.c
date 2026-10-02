#include <stdio.h>
#include "operations.h"

int main()
{
    int a, b;

    printf("===== Custom Header File Example =====\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nAddition: %d\n", add(a, b));
    printf("Multiplication: %d\n", multiply(a, b));

    return 0;
}
