#include <stdio.h>

int temp[100];

int GetSet(int *array[]) {
    int i, n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) n = 0;

    if (n < 0) n = 0;
    if (n > 100) n = 100;

    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &temp[i]) != 1) temp[i] = 0;
    }

    *array = temp;
    return n;
}

int main() {
    int *data, num, i;
    num = GetSet(&data);

    printf("\nSet elements: ");
    for (i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}
