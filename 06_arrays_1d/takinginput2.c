#include<stdio.h>// THIS IS AGAIN A WAY TO TAKE INPUT FROM THE USER BUT AGAIN IT IS ALSO
int main(){//       NOT THE MOST EFFICIENT WAY TO TAKE INPUT WAY BECAUSE OF THE SAME    
    int arr[5];//   PROBLEM STATEMENT
    printf("ENTER THE FIRST ELEMENT: ");
    scanf("%d",&arr[0]);
    printf("ENTER THE SECOND ELEMENT: ");
    scanf("%d",&arr[1]);
    printf("ENTER THE THIRD ELEMENT: ");
    scanf("%d",&arr[2]);
    printf("ENTER THE FOURTH ELEMENT: ");
    scanf("%d",&arr[3]);
    printf("ENTER THE FIFTH ELEMENT: ");
    scanf("%d",&arr[4]);

    printf("%d",arr[0]);
    printf("%d",arr[1]);
    printf("%d",arr[2]);
    printf("%d",arr[3]);
    printf("%d",arr[4]);
    return 0;
}