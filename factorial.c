#include <stdio.h>

int Rfactorial(int x) {
    int i;
	if (x < 0) {
		printf("Input should be positive.\n");
		return -1;
	}
	else if (x == 0 || x == 1) {
		return 1;
	}
	else {
		return x*Rfactorial(x-1);
	}
}

int nRfactorial(int a) {
    int i = a;
    int j = 0;
    int k = 1;

    if (a < 2) {
        return 1;
    }

	while (j < a) {
        k * (i-j);
        j++;
    }

    return k;
}

void main() {
    printf("What number do you wish to find the factorial of: ");
    int a;
    scanf("%d",&a);

    printf("the recursive factorial of %d is %d.\n", a, Rfactorial(a));
    printf("the non-recursive factorial of %d is %d.\n", a, nRfactorial(a));
}