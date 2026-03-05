// Q: Given an array of marks of student, if the marks of any student is less than 35 print
//    its roll number, where roll number here refers to the index of the element of array

#include<stdio.h>
int main(){
    int arr[10];
    // Taking input to the array
    for(int i=0;i<=9;i++){
        printf("Enter marks %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=9;i++){
        if(arr[i]<35) printf("%d\n",i);
    }
    return 0;
}