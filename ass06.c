#include <stdio.h>

int rfactorial(int a) {
    if (a < 0) {
        printf("Number must not be negative!\n");
        return 0;
    } else if (a == 0 || a == 1) {
        return 1;
    } else {
        return a*rfactorial(a-1);
    }
}

int ifactorial(int a) {
    int factorial = 1;
    if (a < 0) {
        printf("Number must not be negative!\n");
        return 0;
    } else if (a == 0 || a == 1) {
        return 1;
    } else {
        while (a > 0) {
            factorial *= a;
            a--;
        }
        return factorial;
    }
}

void main() {
    int n;
    printf("Write your number: ");
    scanf("%d", &n);
    if (n >= 0) {
        printf("Recursive: %d! = %d.\n", n, rfactorial(n));
        printf("Iterative: %d! = %d.\n", n, ifactorial(n));
    } else {
        rfactorial(n);
    }
}