#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};// HERE THIS IS LIKE ARRAY INSIDE A ARRAY A MORE BETTER WAY
    // THIS ALSO FORMS 1 2 3
    //                 4 5 6
    //                 7 8 9
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}// HERE i IS FOR ROWS
// AND j IS FOR COLUMNS