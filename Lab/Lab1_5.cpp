#include <stdio.h>

int matrixBuffer[10000]; 

void GetMatrix(int *value[], int *row, int *col) {
    int i, j;

    scanf("%d %d", row, col);

    for (i = 0; i < *row; i++) {
        for (j = 0; j < *col; j++) {
            scanf("%d", &matrixBuffer[i * (*col) + j]);
        }
    }

    *value = matrixBuffer;
}

int main() {
    int *data, m, n;
    

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}
