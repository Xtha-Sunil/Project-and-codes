#include <stdio.h>

void add_numbers() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
}

int main() {
    add_numbers();
    return 0;
}