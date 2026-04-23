#include <stdio.h>

void main() {
	int basicPay;
	float hra,ta,grossSalary,professionalTax,finalSalary;
	printf("Insert Basic Pay: ");
	scanf("%i",&basicPay);
	
	hra = basicPay*0.1;
	ta = basicPay*0.05;
	grossSalary = basicPay+hra+ta;
	professionalTax = grossSalary*0.02;
	finalSalary = grossSalary-professionalTax;
	
	printf("Your final salary is Rs. %.2f.\n",finalSalary);
}
