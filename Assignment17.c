#include <stdio.h>

float power(float in, int p) {
    float result = 1;
    for (int i = 0; i < p; i++) {
        result *= in;
    }
    return result;
}

int factorial(int x) {
    if (x<0) {
        return -1;
    } else if (x == 0 || x == 1) {
        return 1;
    } else {
        return x*factorial(x-1);
    }
}

void main() {
    float n,sum=0.0,pi = 3.1415926535897932384626433832795028841979693993751;
    int c,count=0;
    printf("Enter the angle (in radians)? ");
    scanf("%f",&n);
    printf("How many terms do you wish for? ");
    scanf("%d",&c);

    while (n > 2*pi) {
        n -= 2*pi;
    }


    for (int i = 0; count < c; i++) {
        if (i % 2 != 0 && count % 2 == 0) {
            count++;
            sum += (power(n,i)/factorial(i));

        } else if (i % 2 != 0 && count % 2 != 0) {
            count++;
            sum -= (power(n,i)/factorial(i));
        }
    }
    
    printf("The sum is %f\n",sum);
}
