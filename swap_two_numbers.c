#include <stdio.h>

int main() {
    int num1,num2,temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("before swapping:\n");
    printf("num1=%d , num2=%d",num1,num2);

    //swapping usind a temperory variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d", num1, num2);

    return 0;
}
