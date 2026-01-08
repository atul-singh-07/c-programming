#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;// USED DOUBLE DATATYPE FOR STORING FLOAT VALUES WITH PRECISION
    printf("ENTER COORDINATES OF X1 AND Y1:");
    scanf("%lf %lf",&x1,&y1);
    printf("ENTER COORDINATES OF X2 AND Y2:");
    scanf("%lf %lf",&x2,&y2);
    printf("ENTER CORRDINATES OF X3 AND Y3:");
    scanf("%lf %lf",&x3,&y3);
    double m1,m2;// USED DOUBLE DATATYPE FOR STORING FLOAT VALUES WITH PRECISION
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if (m1==m2){// COMPARING SLOPES IF EQUAL MEANS COORDINATES LIES ON STRAIGHT LINE
        printf("ALL THE THREE COORDINATES FALL ON STRAIGHT LINE");
    }
    else{
        printf("COORDINATES NOT LIE ON STRAIGHT LINE");
    }
    return 0;
}