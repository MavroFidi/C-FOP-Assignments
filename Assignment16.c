#include <stdio.h>

void main() {
    int num, counte = 0, counto = 0;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    printf("Enter the elements: ");
    int list[num];
    for (int i = 0; i < num; i++) {
        int temp;
        scanf("%d", &temp);
        list[i] = temp;
        if (temp % 2 == 0) {
            counte++;
        } else {
            counto++;
        }
    }
    int even[counte];
    int odd[counto];
    for (int i = 0, j = 0, k = 0; i < num; i++) {
        if (list[i] % 2 == 0) {
            even[j++] = list[i];
        } else {
            odd[k++] = list[i];
        }
    }
    printf("Even numbers are: ");
    for (int i = 0; i < counte; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd numbers are: ");
    for (int i = 0; i < counto; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
}
