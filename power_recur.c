// finding power of two numbers using recursion
#include <stdio.h>

int power (int base, int exp) {
    if (exp != 0) {
        return (base * power(base, exp-1));
    } else {
        return 1;
    }
}

int main(void) {
    int b,e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);

    printf("The power is %d\n", power(b,e));
}
