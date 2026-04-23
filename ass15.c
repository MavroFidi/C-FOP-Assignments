#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    int a;
    printf("Enter how many random numbers you want: ");
    scanf("%d", &a);

    printf("Pseudo Random Numbers:\n");
    srand(time(NULL));
    for (int i = 0; i < a; i++) {
    loop:;
        int num = (rand() % 900000 + 100000)*((rand() % 10 + 1));
        if (num <= 999999 && num >= 100000) {
            printf("%d\n", num);
        } else {
            goto loop;
        }
    }
    printf("\n");
}
