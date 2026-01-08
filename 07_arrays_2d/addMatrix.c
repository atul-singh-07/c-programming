#include<stdio.h>

int main() {
    int a, b, c, d;

    printf("NOTE: ROW AND COLUMN OF BOTH MATRIX SHOULD BE SAME\n");
    
    printf("ENTER THE NO. ROW OF FIRST MATRIX: ");
    scanf("%d", &a);

    printf("ENTER THE NO. COLUMN OF FIRST MATRIX: ");
    scanf("%d", &b);

    printf("ENTER THE NO. ROW OF SECOND MATRIX: ");
    scanf("%d", &c);

    printf("ENTER THE NO. COLUMN OF SECOND MATRIX: ");
    scanf("%d", &d);

    int arr[a][b];
    int brr[c][d];
    int crr[a][b];

    if(a == c && b == d) {

        printf("\nEnter FIRST matrix elements:\n");
        for(int i=0; i<a; i++) {
            for(int j=0; j<b; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        printf("\nEnter SECOND matrix elements:\n");
        for(int i=0; i<a; i++) {
            for(int j=0; j<b; j++) {
                scanf("%d", &brr[i][j]);
            }
        }

        printf("\nMatrix Addition Result:\n");
        for(int i=0; i<a; i++) {
            for(int j=0; j<b; j++) {
                crr[i][j] = arr[i][j] + brr[i][j];
                printf("%d ", crr[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Matrix addition not possible.\n");
    }

    return 0;
}// MAJA AA GAYA SELF DEVELOPED USER FRIENDLY CODE
