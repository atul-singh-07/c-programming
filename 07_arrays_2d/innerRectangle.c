#include<stdio.h>
int main(){
    int arr[6][5]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
    // HERE IN THIS CODE WE JUST NEED TO CAHNGE I AND J OF LOOP ACCORDING TO THE
    // COORDINATES IN OUR CASE i will go to 4 means less than 5
    //                         j start from 1 to 4 means less than 5

    // THIS LOOP IS FOR PRINTING COMPLETE MATRIX
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // THIS LOOP IS FOR INNER RECTANGLE WITH MODIFICATION IN I AND J
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=1;j<5;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("THE SUM OF THE INNER RECTANGLE IS:%d\n",sum);
    // NOW LETS LOOK THE NEW SMALLER RECTANGLE OF WHICH WE GOT THE SUM

    for(int i=0;i<5;i++){
        for(int j=1;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}