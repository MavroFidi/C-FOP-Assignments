#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *sptr,*dptr;
    char data[100];

    sptr = fopen("source.txt", "r");
    if (sptr == NULL) {
        printf("The file is not opened.\n");
        return 1;
    }
    else printf("The file is opened Successfully.\n");

    dptr = fopen("destination.txt", "w");
    if (dptr == NULL) {
        printf("The file is not created.\n");
        return 1;
    }
    else printf("The file is created Successfully.\n");

    while (fgets(data, sizeof(data), sptr) != NULL) {
        fputs(data, dptr);
    }
    fclose(sptr);
    fclose(dptr);

    return 0;
}