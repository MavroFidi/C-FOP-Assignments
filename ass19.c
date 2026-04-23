#include <stdio.h>
#include <string.h>

typedef struct employee {
    char name[50];
    char designation[50];
    char gender;
    char joinDate[10];
    unsigned int salary;
} employee;

void main() {
    int total,male=0,female;
    printf("Enter number of employees: ");
    scanf("%d",&total);
    employee list[total];
    for (int i = 0; i < total; i++) {
        printf("Enter employee %d details:\n",i+1);
        printf("Name: ");
        scanf("%s",list[i].name);
        printf("Designation: ");
        scanf("%s",list[i].designation);
        printf("Gender (F/M): ");
        scanf(" %c",&list[i].gender);
        printf("Join Date (YYYY-MM-DD): ");
        scanf("%s",list[i].joinDate);
        printf("Salary: ");
        scanf("%u",&list[i].salary);
    }
    printf("Total number of employees: %d\n", total);
    for (int i = 0; i < total; i++) {
        if (list[i].gender == 'm' || list[i].gender == 'M') male++;
    }
    female = total - male;
    printf("Male employees: %d\n", male);
    printf("Female employees: %d\n", female);
    printf("The employees with a salary >= 10,000 are: ");
    for (int i = 0; i < total; i++) {
        if (list[i].salary >= 10000) printf("%s ",list[i].name);
    }
    printf("\n");
    printf("The employees with the designation of AssntManager are: ");
    for (int i = 0; i < total; i++) {
        if (strcmp(list[i].designation, "AssntManager") == 0) {
            printf("%s ",list[i].name);
        }
    }
    printf("\n");
}
