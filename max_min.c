#include <stdio.h>

void max_min(int a, int b) {
    if (a >= b) {
        printf("%d is bigger.\n", a);
    } else {
        printf("%d is bigger.\n", b);
    }
} 

int main(void) {
    int i,j;

    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);

    max_min(i,j);
}
