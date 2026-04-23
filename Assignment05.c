#include <stdio.h>

int a,b,c,d;

void addition(int a, int b, int c, int d, int m1[a][b], int m2[c][d]) {
    if (a == c && b == d) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                m2[i][j] = m1[i][j] + m2[i][j];
            }
        }
    } else {
        printf("Invalid Operation.\n");
    }
}

void scanMatrix(int a, int b, int matrix[a][b]) {
    for (int i = 0; i < a ; i++) {
        for (int j = 0; j < b ; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int a, int b, int matrix[a][b]) {
    for (int i = 0; i < a ; i++) {
        for (int j = 0; j < b ; j++) {
            printf("%d", matrix[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}

int Min(int a, int b) {
    if (a<b) {
        return 1;
    } else {
        return 0;
    }
}

int Max(int a, int b) {
    if (b<a) {
        return 1;
    } else {
        return 0;
    }
}

void saddlepoint(int a, int b, int m[a][b]) {
    int i = 0;
    int j = 0;

    for (i = 0; i < a; i++) {
        int min = m[i][0];
        int col = 0;
        for (j = 1; j < b; j++) {
            if (Min(m[i][j], min)) {
                min = m[i][j];
                col = j;
            }
        }
        int k;
        int flag = 1;
        for (k = 0; k < a; k++) {
            if (Max(m[k][col], min)) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("Saddle Point: %d\n", min);
            return;
        }
    }
}



int magicSquare(int a, int b, int m[a][b]) {
    int sum = 0;
    int failed = 0;

    for (int i = 0; i < a; i++)
        sum += m[i][0];

    for (int col = 1; col < b && !failed; col++) {
        int temp = 0;
        for (int i = 0; i < a; i++)
            temp += m[i][col];
        if (temp != sum) failed = 1;
    }

    for (int row = 0; row < a && !failed; row++) {
        int temp = 0;
        for (int j = 0; j < b; j++)
            temp += m[row][j];
        if (temp != sum) failed = 1;
    }

    int temp = 0;
    for (int i = 0; i < a && !failed; i++)
        temp += m[i][i];
    if (temp != sum) failed = 1;

    temp = 0;
    for (int i = 0; i < a && !failed; i++)
        temp += m[i][a-1-i];
    if (temp != sum) failed = 1;

    return failed ? 0 : sum;
}

void main() {
    int a,b;
    printf("Enter the dimensions of the matrix: ");
    scanf("%d %d", &a, &b);
    int m[a][b];
    scanMatrix(a, b, m);
    printMatrix(a, b, m);
    int c,d;
    printf("Enter the dimensions of the second matrix: ");
    scanf("%d %d", &c, &d);
    int m2[c][d];
    scanMatrix(c, d, m2);
    printMatrix(c, d, m2);
    printf("1 for addition\n2 for saddlepoint\n3 for magic square check\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        addition(a,b,c,d,m,m2);
        printMatrix(c,d,m2);
        break;
    case 2:
        saddlepoint(a,b,m);
        break;
    case 3:
        if (magicSquare(a, b, m) != 0) {
            printf("The matrix is a magic square with a sum of %d.\n", magicSquare(a, b, m));
        } else {
            printf("The matrix is not a magic square.\n");
        }
        break;
    default:
    printf("Invalid Operation\n");
        break;
    }
}
