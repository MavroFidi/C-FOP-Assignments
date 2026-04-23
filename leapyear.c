#include <stdio.h>

void main () {
	int a;
	printf("Enter your year: ");
	scanf("%d",&a);
	if (a % 4 == 0) {
		if (a%400 == 0) {
			printf("This year is a leap year!\n");
		}
		else if (a%100 != 0) {
			printf("This year is a leap year!\n");
		}
		else {
			printf("This year is not a leap year!\n");
		}
	}
	else {
	printf("This year is not a leap year!\n");
	}
}
