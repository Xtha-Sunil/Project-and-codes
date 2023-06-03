#include <stdio.h>

int get_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int x = get_number();
    printf("You entered: %d\n", x);
    return 0;
}