#include <stdio.h>

void prime(int num) {
    for (int i=1; i<=num; i++) {
        if (num%i == 0) {
            printf("%d is composite number.", num);
        }
    }
}

void perfect(int num) {
    int temp=num, last_digit, sum=0;
    
    for (int i=1; i<=num; i++) {
        if (num%i == 0) {
            sum = sum + i;
        }
    }

    if (sum == temp) {
        printf("%d is perfect number", num);
    } 
}

void armstrong(int num) {
    // complete this part
}
