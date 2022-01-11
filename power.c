#include <stdio.h>

long int power(int base, int exp) { 
    long int result=1;

    while (exp != 0) {
        result = result * base;
        exp--;
    }

    return result;

}

int main(void) {
    int b,e;

    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);
    
    printf("%ld\n", power(b,e));
}