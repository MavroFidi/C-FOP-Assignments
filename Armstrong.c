#include <stdio.h>

void main() {
	int num,num1,digit,bug;
	int i = 0;
	int d[3];
	printf("What is your number? ");
	scanf("%d",&num);
	num1 = num;
	if (num > 999 || num < 100) {
		printf("number is not a 3 digit number\n");
	}
	else {
		while (num > 0) {
			if (i == 3) {
				break;
			}
			digit = num % 10;
			d[i] = digit;
			num /= 10;
			i++;
		}
		bug = (d[1])*(d[1])*(d[1])+(d[2])*(d[2])*(d[2])+(d[0])*(d[0])*(d[0]);
		if (bug == num1) {
			printf("%d is an Armstrong number\n",num1);
			
		} else {
		printf("%d is not an Armstrong number\n",num1);
		}
	}
}
