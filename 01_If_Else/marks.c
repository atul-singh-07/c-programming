#include<stdio.h>// BENEFITS OF ELSE IF STATEMENT C BE UNDERSTOOD IN THIS Q 
int main(){
    int n;
    printf("ENTER YOUR PERCENTAGE IN INTEGER: ");
    scanf("%d",&n);
    // more than 80=A
    // more than 60=B         // GIVEN INFOMATION OF CODE
    // more than 40=C
    // less than 40=D
    // if(n>80){
    //     printf("A GRADE");
    // }
    // else if(n>60){
    //     printf("B GRADE");
    // }                       // BY COMMENTING OUT U CAN ACCESS THIS CODE
    // else if(n>40){
    //     printf("C GRADE");
    // }
    // else{
    //     printf("D GRADE");
    // }
    if(n>80){
        printf("A GRADE");
    }
    else{
        if(n>60){
            printf("B GRADE");
        }
        else{
            if(n>40){
                printf("C GRADE");
            }
            else{
                printf("GRADE D");
            }
        }
    }// IN THIS CODE WE HAVE USE ELSE IF INSIDE EACH OTHER RATHER THAN THAT OF ELSE IF 
    return 0;// BUT IS COMPLETELY SAME AS OF COMMENTED CODE
}