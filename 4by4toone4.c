#include <stdio.h>

int main() {
    int matrix[4][4], arr[16];
    int i, j, k, temp;
    int index = 0;

    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            arr[index++] = matrix[i][j];
        }
    }


    for(i = 0; i < 16 - 1; i++) {
        for(j = 0; j < 16 - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("\nSorted elements in 1D array:\n");
    for(k = 0; k < 16; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}
