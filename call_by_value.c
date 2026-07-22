#include <stdio.h>

void increment(int n) {
    n = n + 5;
    printf("Inside function: %d\n", n);
}

int main() {
    int num = 10;

    increment(num);

    printf("Outside function: %d", num);
    return 0;
}