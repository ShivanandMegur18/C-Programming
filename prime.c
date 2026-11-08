#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter the n value: ");
    scanf("%d", &n);

    //Entered number is less than equal to 1 The number is not prime

    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("It is prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}