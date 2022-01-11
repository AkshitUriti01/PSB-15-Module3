#include <stdio.h>

void range(int n) {
    printf("Even Numbers:");
    printf("\tOdd numbers:");
    for (int i=1; i<=n; i++) {
        if (i%2 == 0) {
            printf("%d\n", i);
        } else if (i%2 == 1) {
            printf("\t\t%d\n", i);
        }
    }
}

int main(void) {
    range(10);
}
