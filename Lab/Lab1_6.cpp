#include <stdio.h>
#include <stdlib.h>

int *GetMatrix(int *numRows, int *numCols) {
    int size;
    int *matrix;

    scanf("%d %d", numRows, numCols);

    size = (*numRows) * (*numCols);
    matrix = (int *)malloc(size * sizeof(int));

    if (matrix == NULL) {
        exit(0);
    }

    for (int i = 0; i < size; i++) {
        scanf("%d", &matrix[i]);
    }

    return matrix;
}

int main() {
    int *matrixData;
    int m, n;

    matrixData = GetMatrix(&m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrixData[i * n + j]);
        }
        printf("\n");
    }

    free(matrixData);
    return 0;
}
