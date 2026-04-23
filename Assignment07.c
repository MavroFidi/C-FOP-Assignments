#include <stdio.h>

struct student
{
    char *name;
    int roll;
    int marks[3];
};

void main() {
    int n;
    printf("Enter the number of students you wish to enter: ");
    scanf("%d", &n);
    struct student students[n];
    
    for (int i = 0; i < n; i++) {
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("Roll Number: ");
        scanf("%d",&students[i].roll);
        printf("Marks of subject 1: ");
        scanf("%d",&students[i].marks[0]);
        printf("Marks of subject 2: ");
        scanf("%d",&students[i].marks[1]);
        printf("Marks of subject 3: ");
        scanf("%d",&students[i].marks[2]);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Total Marks: %d\n", students[i].marks[0] + students[i].marks[1] + students[i].marks[2]);
        printf("Percentage: %.2f%%\n", ((float)(students[i].marks[0] + students[i].marks[1] + students[i].marks[2])) / 3.0);
    }
}


