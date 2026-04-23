#include <stdio.h>

void main() {
	int a,c,d;
	char b;
	printf("To add type '+', to subtract type '-', to multiply type '*', to divide press '/'\nType in your 2 operands on either side of the operator.\nExample: 1+2, 4-3, 5*2, 4/2. ");
	scanf("%d %c %d",&a,&b,&c);
	
	if (b == '+') {
	d = a+c;
	printf("%d+%d=%d\n",a,c,d);
	}
	else if (b == '-') {
	d = a-c;
	printf("%d-%d=%d\n",a,c,d);
	}
	else if (b == '*') {
	d = a*c;
	printf("%d*%d=%d\n",a,c,d);
	}
	else if (b == '/') {
	d = a/c;
	printf("%d/%d=%d\n",a,c,d);
	}
	else {
	printf("Invalid Operator\n");
	}
}
