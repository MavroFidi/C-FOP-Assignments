#include <stdio.h>
#include <string.h>

void main() {
    char s1[50], s2[50],choice;
    printf("Enter your first string: \n");
    scanf("%s",s1);
    printf("Enter your second string: \n");
    scanf("%s",s2);
    printf("1 for length.\n2 for copy.\n");
    printf("3 for concatenation.\n4 for compare.\n");
    printf("Enter your choice: \n");
    scanf(" %c",&choice);
    
    switch (choice) {
        case '1':
            printf("The length of \"%s\" is %lu.\n",s1,strlen(s1));
            printf("The length of \"%s\" is %lu.\n",s2,strlen(s2));
            break;
        case '2':
            printf("\"%s\" ---> ",s2);
            strcpy(s2,s1);
            printf("\"%s\".\n",s2);
            break;
        case '3':
            printf("\"%s\" + \"%s\" = ",s1,s2);
            printf("\"%s\".\n",strcat(s1,s2));
            break;
        case '4':
            if (strcmp(s1,s2) == 0) {
                printf("\"%s\" is equal to \"%s\"");
            } else {
                printf("\"%s\" is not equal to \"%s\"");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}
