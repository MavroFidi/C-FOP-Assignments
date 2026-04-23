#include <stdio.h>

void main() {
	int a,b,c,d,e;
	float agg;
	printf("Enter your 5 scores: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	agg = (float) (a+b+c+d+e)/5;
	
	if (a > 100 || b > 100 || c > 100 || d > 100 || e > 100) {
		printf("Naughty Naughty, marks can be only 100 or lower.\n");
	} else {
	
	if (a < 40 || b < 40 || c < 40 || d < 40 || e < 40) {
		printf("You have failed.\n");
	} else {
		printf("You have passed.\n");
		printf("Your aggregate is %.2f%%.\n",agg);
		
		if (agg >= 40 && agg < 50) {
			printf("Your grade is third division!\n");
		}
		else if (agg >= 50 && agg < 60) {
			printf("Your grade is second division!\n");
		}
		else if (agg >= 60 && agg < 75) {
			printf("Your grade is first division!\n");
		}
		else if (agg >= 75) {
			printf("Your grade is Distinguished!\n");
		}
	}

	}
}
