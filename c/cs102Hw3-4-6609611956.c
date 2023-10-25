#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int matrix[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }

    // sum+
    int rowsum = 0;
    int colsum = 0;
    int midodd = n / 2;

    if (n % 2 != 0) { // odd
        for (i = 0; i < n; i++) {
            rowsum += matrix[i][midodd];
            colsum += matrix[midodd][i];
        }
    } else { // even
        int mid1 = n / 2 - 1;
        int mid2 = n / 2;
        for (i = 0; i < n; i++) {
            rowsum += (matrix[i][mid1] + matrix[i][mid2]) / 2;
            colsum += (matrix[mid1][i] + matrix[mid2][i]) / 2;
        }
    }

    // diagonal
    int diagsum1 = 0;
    int diagsum2 = 0;
    for (i = 0; i < n; i++) {
        diagsum1 += matrix[i][i];
        diagsum2 += matrix[i][n - i - 1];
    }

    // max
    int maxsum = 0;
    if (rowsum > maxsum) {
        maxsum = rowsum;
    }
    if (colsum > maxsum) {
        maxsum = colsum;
    }
    if (diagsum1 > maxsum) {
        maxsum = diagsum1;
    }
    if (diagsum2 > maxsum) {
        maxsum = diagsum2;
    }

    printf("%d", maxsum);
    return 0;
}

