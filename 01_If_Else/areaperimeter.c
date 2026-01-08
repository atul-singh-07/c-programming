#include<stdio.h>
int main(){
    float length,breath,area,perimeter;// WE HAVE CREATED FOUR DABBE
    printf("ENTER THE VALUE OF LENGTH:");
    scanf("%f",&length);// INPUTING THE VALUE OF LENGTH
    printf("ENTER THE VALUE OF BREATH:");
    scanf("%f",&breath);// INPUTING THE VALUE OF BREATH
    area = length*breath;// CALCULATING AREA
    perimeter = 2*(length+breath);// CALCULATING PERIMETER
    if(area>perimeter){// CONDITION
        printf("AREA IS GREATER\n");
        printf("WHERE AREA IS:%f AND PERIMETER IS:%f",area,perimeter);// FETCHING VALUE OF 
    }//AREA AND PERIMETER
    if(perimeter>area){// CONDITION
        printf("PERIMETER IS GREATER\n");
        printf("WHERE AREA IS:%f AND PERIMETER IS:%f",area,perimeter);// FETCHING VALUE OF
    }// AREA AND PERIMETER
    if(area==perimeter){// CONDITION
        printf("BOTH ARE EQUAL");
    }
    return 0;
}// HERE WE HAVE USED THREE IF STATEMENTS