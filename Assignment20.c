#include <stdio.h>

void swapp(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void main() {
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    int x = a, y = b;
    int t = a;
    a = b;
    b = t;
    printf("After swapping without pointers:\na = %d b = %d\n",a,b);
    swapp(&x,&y);
    printf("After swapping with pointers:\nx = %d y = %d\n",x,y);

}
