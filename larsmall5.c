#include <stdio.h>

int main() {
    int matrix[3][3];
    int *ptr;
    int i, j;
    int largest, smallest;


    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    ptr = &matrix[0][0];

    largest = *ptr;
    smallest = *ptr;


    for(i = 0; i < 9; i++) {
        if(*(ptr + i) > largest)
            largest = *(ptr + i);
        if(*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }


    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
