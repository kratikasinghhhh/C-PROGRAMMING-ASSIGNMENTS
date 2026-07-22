#include <stdio.h>

int main() {
    int n, i;
    int n1 = 0, n2 = 1, n3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", n1);

        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return 0;
}