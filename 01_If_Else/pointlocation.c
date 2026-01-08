#include<stdio.h>
int main(){
    int x,y;
    printf("ENTER THE X POINT:");
    scanf("%d",&x);
    printf("ENTER THE Y POINT:");
    scanf("%d",&y);
    if(x==0 &&y==0) printf("ORIGIN");
    else if(x==0) printf("Y COORDINATE POINT");
    else if(y==0) printf("X COORDINATE POINT");
    else printf("THE ENTERED POINT IS NOT ORIGIN AND NOR X AND Y POINTS");
    return 0;
}// Y IS ALWAYS ZERO FOR X AXIS
//  X IS ALWAYS ZERO FOR Y AXIS