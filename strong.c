// printing strong numbers between two numbers

#include <stdio.h>
#include<stdbool.h>  

/* 
    algorithm:
        get last digit of the number entered by the user
        find factorial of that digit and add it to sum
        finally use if condition and check if sum and inputted number are same or not
*/

int factorial(int num) {
    int fact=1;
    for (int i=1; i<= num; i++) {
        fact = fact * i;
    }

    return fact;
}

bool strong(int num) {
    int temp=num, sum=0, last_digit;

    while (num != 0) {
        last_digit = num % 10;
        sum = sum + factorial(last_digit);
        num = num/10;
    }

    if (temp == sum) {
        return true;
    } else {
        return false;
    }
}

void print_strong(int start, int end) {
    for (int i=start; i<=end; i++) {
        if (strong(i)) {
            printf("The strong numbers are:\n%d\t", i);
        } 
    }
}

int main(void) {
    int i,j;
    printf("Enter starting and ending numbers: ");
    scanf("%d %d", &i, &j);

    print_strong(i,j);
}
