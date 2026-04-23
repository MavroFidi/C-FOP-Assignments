#include <stdio.h>

int twopow(int a) {
    int pow = 1;
    for (int i = 0; i < a; i++) {
        pow *= 2;
    }
    return pow;
}

void main() {
    int n;
    int count = 0;

    printf("Input number: ");
    scanf("%d",&n);
    int temp = n;

    for (int i = 0; temp > 0; i++) {
        count++;
        temp /= 10;
    }

    int digits[count];
    temp = n;
    for (int i = 0; i < count; i++) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    int sum = 0;
    
    for (int i = 0; i < count; i++) {
        sum += digits[i] * twopow(i);
    }

    printf("The decimal of %d is %d.\n", n, sum);
    
}