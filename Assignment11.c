#include <stdio.h>

int power(int x, int p) {
	int i = 1;
	int a = x;
	while (i < p) {
		x *= a;
		i++;
	}
	return x;
}


int prime(int x) {
	int flag = 1;
	for (int i = 2; i <= x/2; i++) {
		if (x % i == 0) {
			flag = 0;
			break;
		}
	}
	if (flag && x > 1) {
		return 1;
	} else {
		return 0;
	}
}

unsigned long long factorial(int x) {
	if (x < 0) {
		printf("Input should be positive.\n");
		return -1;
	}
	else if (x == 0 || x == 1) {
		return 1;
	}
	else if (x > 20) {
		printf("Input is too large.\n");
		return -1;
	}
	else {
		return x*factorial(x-1);
	}
}

float squareroot(int x) {
	float sqrtval = (float) x/2;
	float temp = 0;

	while (sqrtval != temp) {
		temp = sqrtval;
		sqrtval = (x / sqrtval + sqrtval) / 2;
		float diff = sqrtval-temp;
		if (diff < 0) {
			diff = -diff;
		}

		if (diff < 0.0001) {
			break;
		}
	}
	return sqrtval;
}

void pfactor(int x) {
    int count = 0;
    for (int i = 2; i <= x; i++)
        if (prime(i))
            count++;
    int pfactors[count];
    int j = 0;
    for (int i = 2; i <= x; i++)
        if (prime(i))
            pfactors[j++] = i;

    int mcount = 0;
    for (int i = 0; i < count; i++)
        if (x % pfactors[i] == 0)
            mcount++;

    int factors[mcount];
    j = 0;
    for (int i = 0; i < count; i++)
        if (x % pfactors[i] == 0)
            factors[j++] = pfactors[i];

    printf("Prime factors of %d are: ", x);
    for (int i = 0; i < mcount; i++)
        printf("%d ", factors[i]);
    printf("\n");
}

void main() {
	int a,c;
	
	printf("1 for square\n2 for cube\n3 for prime check\n4 for factorial\n"
	"5 for square root\n6 for prime factors\n");
	printf("Enter your number: ");
	scanf("%d",&a);
	printf("Enter your choice: ");
	scanf("%d",&c);

	switch(c) {
		case 1:
			printf("Square of %d is %d\n",a,power(a,2));
			break;
		case 2:
			printf("Cube of %d is %d\n",a,power(a,3));
			break;
		case 3:
			if(prime(a)) {
				printf("%d is a prime number.\n",a);
			} else {
			printf("%d is not a prime number.\n",a);
			}
			break;
		case 4: {
			unsigned long long result = factorial(a);
			if (result == -1) {
			} else {
				printf("Factorial of %d is %llu\n",a,result);
			}
			break;
		}
		case 5:
			printf("Square Root of %d is %.3f\n",a,squareroot(a));
			break;
		case 6:
			pfactor(a);
			break;
		default:
			printf("Invalid choice.\n");
	}
}
