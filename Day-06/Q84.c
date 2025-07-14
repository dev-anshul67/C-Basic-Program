#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int found = 0;
    for(i = 0; i < r; i++) {
        int minRow = a[i][0], colIndex = 0;

        for(j = 1; j < c; j++) {
            if(a[i][j] < minRow) {
                minRow = a[i][j];
                colIndex = j;
            }
        }

        int isSaddle = 1;
        for(int k = 0; k < r; k++) {
            if(a[k][colIndex] > minRow) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("Saddle point is %d at (%d, %d)\n", minRow, i+1, colIndex+1);
            found = 1;
        }
    }

    if(!found)
        printf("No saddle point in the matrix.\n");

    return 0;
}
