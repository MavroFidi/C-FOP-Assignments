#include <stdio.h>

void main() {
    int n;
    int count = 0;

    printf("Input number: ");
    scanf("%d",&n);
    int temp = n;

    do {
        count++;
        temp /= 10;
    } while (temp > 0);

    int digits[count], i = 0;
    temp = n;
    do {
        digits[i] = temp % 10;
        temp /= 10;
    } while (i < count);

    printf("The reverse of %d is ", n);
    for (int i = 0; i < count; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");
}
