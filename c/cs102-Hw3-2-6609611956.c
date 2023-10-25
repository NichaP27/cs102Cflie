#include <stdio.h>

int main() {
    int N, i, j;
    printf("Enter size of your square: ");
    scanf("%d", &N);
    
    if (N < 3 || N > 20) {
        printf("Invalid input. The size must be between 3 and 20.\n");
        printf("Enter size of your square: ");
        scanf("%d", &N);
    }

    int square[N][N];
    printf("Enter your square:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    int isMagicSquare = 1;
    int magicConstant = 0;
    int maxSum = 0;

    for (j = 0; j < N; j++) {
        magicConstant += square[0][j];
    }
    int isMagic = 1;
    for (i = 0; i < N; i++) {
        int rowSum = 0;
        int colSum = 0;

        for (j = 0; j < N; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }

        if (rowSum != magicConstant || colSum != magicConstant) {
            isMagicSquare = 0; // Not a magic square
        }
        if (rowSum > maxSum) {
             maxSum = rowSum;
             } else 
               if (colSum > maxSum) {
                maxSum = colSum;
            }

    }

    // Check the main diagonal from top-left to bottom-right
    int diagSum1 = 0;
    for (i = 0; i < N; i++) {
        diagSum1 += square[i][i];
    }
    if (diagSum1 != magicConstant) {
        isMagicSquare = 0; // Not a magic square
    }

    // Check the other diagonal from top-right to bottom-left
    int diagSum2 = 0;
    for (i = 0; i < N; i++) {
        diagSum2 += square[i][N - i - 1];
    }
    if (diagSum2 != magicConstant) {
        isMagicSquare = 0; // Not a magic square
    }
    if (diagSum1 > maxSum) {
            maxSum = diagSum1;
        } else 
            if (diagSum2 > maxSum) {
            maxSum = diagSum2;
            }

    if (isMagicSquare) {
        printf("Your square is Magic Square!!\nThe magic Constant is %d", magicConstant);
    } else {
        printf("Your square is NOT a magic square.\nThe maximum sum is %d\n", maxSum);
    }

    return 0;
}
