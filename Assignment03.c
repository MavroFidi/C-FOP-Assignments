#include <stdio.h>

void main() {
	int a,b,c;
	int i = 1;
	printf("Which number do you wish to find the multiplication table of? ");
	scanf("%i",&a);
	printf("Up to which number do you wish to multiply it? ");
	scanf("%i",&b);
	
	while (i<=b) {
		c = a*i;
		printf("%i x %i = %i\n",a,i,c);
		i++;
	}
}
