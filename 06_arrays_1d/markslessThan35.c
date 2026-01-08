#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<=9;i++){
        printf("ENTER MARKS OF STUDENT %d:",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=9;i++){
        if(marks[i]<35) printf(" FAILED ROLL NO. ARE: %d\n",i);
    }
    return 0;
}