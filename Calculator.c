#include <stdio.h>

int power(int x,int y) {
	int i = 1;
	int a = x;
	while (i < y) {
		x *= a;
		i++;
	}
	return x;
	}
	
int factorial(int x) {
	int i;
	if (x < 0) {
		printf("Input should be positive.\n");
		return -1;
	}
	else if (x == 0 ||x == 1) {
		return 1;
	}
	else {
		return x*factorial(x-1);
	}
}

void main() {
	int a,c,d;
	char b;
	printf("To add type '+', to subtract type '-', to multiply type '*', to divide press '/', to exponetiate pres '^', for factorial press '!': ");
	scanf("%c",&b);
	
	switch (b) {
		case '+':
			printf("Enter your 2 numbers: ");
			scanf("%d %d",&a,&c);
			d = a+c;
			printf("%d+%d=%d\n",a,c,d);
			break;
		case '-':
			printf("Enter your 2 numbers: ");
			scanf("%d %d",&a,&c);
			d = a-c;
			printf("%d-%d=%d\n",a,c,d);
			break;
		case '*':
			printf("Enter your 2 numbers: ");
			scanf("%d %d",&a,&c);
			d = a*c;
			printf("%d*%d=%d\n",a,c,d);
			break;
		case '^':
			printf("Enter your 2 numbers: ");
			scanf("%d %d",&a,&c);
			d = power(a,c);
			printf("%d^%d=%d\n",a,c,d);
			break;
				
		case '!':
			printf("Enter your number: ");
			scanf("%d",&a);
			d = factorial(a);
			printf("%d!=%d\n",a,d);
			break;
		case '/':
			printf("Enter your 2 numbers: ");
			scanf("%d %d",&a,&c);
			float d = (float) a/c;
			printf("%d/%d=%f\n",a,c,d);
			break;
		default:
			printf("Invalid Operator\n");
	}
}
