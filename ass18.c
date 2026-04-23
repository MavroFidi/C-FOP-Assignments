#include <stdio.h>
#include <string.h>


void main() {
    char s1[50],s2[50],s3[50];
    size_t len1,len2;

    printf("Enter your string: ");
    scanf("%49s", s1);
    printf("Enter a string for equality check: ");
    scanf("%49s", s2);
    printf("Enter your substring: ");
    scanf("%49s", s3);
    len1 = strlen(s1);
    printf("The length of \"%s\" is %ld.\n",s1,len1);
    char rev[len1+1];
    for (int i = 0; i < len1; i++) {
        rev[i] = s1[len1-1-i];
    }
    rev[len1] = '\0';
    printf("The reverse of \"%s\" is \"%s\".\n",s1,rev);
    if (strcmp(s1,rev) == 0) {
        printf("\"%s\" is a palindrome.\n",s1);
    } else {
        printf("\"%s\" is not a palindrome.\n",s1);
    }
    if (strcmp(s1,s2) == 0) {
        printf("\"%s\" is equal to \"%s\".\n",s1,s2);
    } else {
        printf("\"%s\" is not equal to \"%s\".\n",s1,s2);
    }
    char *result = strstr(s1, s3);
    if (result != NULL) {
        printf("\"%s\" is a substring of \"%s\"\n", s3,s1);
    } else {
        printf("\"%s\" is not a substring of \"%s\"\n", s3,s1);
    }
    
}
    
    