#include <stdio.h>

int gcd(int a; int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, b % a);
    }
}

void main() {
    int a, b;
    printf("Enter your 2 numbers: ");
    scanf("%d %d", &a, &b);

    int divisorsa[a];
    int divisorsb[b];

    int j = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0)
            divisorsa[j++] = i;
    }

    int k = 0;
    for (int i = 1; i <= b; i++) {
        if (b % i == 0)
            divisorsb[k++] = i;
    }

    int found = 0;
    int lcd = 1;
    for (int c = 0; c < j && !found; c++) {
        for (int d = 0; d < k && !found; d++) {
            if (divisorsa[c] == divisorsb[d] && divisorsa[c] != 1) {
                lcd = divisorsa[c];
                found = 1;
            }
        }
    }

    int gcd = gcd(a,b)

    printf("Least Common Divisor: %d.\nGreatest Common Divisor: %d.\n", lcd, gcd);
}