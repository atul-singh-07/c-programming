#include<stdio.h>
// COLLEGE DSUC FIRST QUESTIONS
 void areaperimeter(float r,float*area,float*perimeter){
    *area=3.1415*r*r;// and directly commiting changes in the address of area variable
    *perimeter=2*3.1415*r;//                                        of perimeter variable
}
int main(){
    float radius;
    float area, perimeter;
    printf("ENTER THE RADIUS OF CIRCLE:");
    scanf("%f",&radius);
    areaperimeter(radius,&area,&perimeter);
    // we are sharing the address of variable from the main function to the called function
    printf("THE AREA OF CIRCLE WITH RADIUS %f is:%f\n",radius,area);
    printf("THE PERIMETER OF CIRCLE WITH RADIUS %f is:%f",radius,perimeter);
    return 0;
}
// note: with the help of pointers we are actuallly changing the item stored in a variable 
//       and accessing it from the other function