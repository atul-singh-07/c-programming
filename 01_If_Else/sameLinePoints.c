#include<stdio.h>// CONCEPT:yeh hai ki kisi bhi 3 point ko same line mein rehne ke liye unka
int main(){// slope between first and second point and slope between 3 and 2 point same hota
    int x1,y1;// hai
    printf("ENTER THE COORDINATE X1:");
    scanf("%d",&x1);
    printf("ENTER THE COORDINATES Y1:");
    scanf("%d",&y1);
    int x2,y2;
    printf("ENTER THE COORDINATE X2:");
    scanf("%d",&x2);
    printf("ENTER THE COORDINATE Y2:");
    scanf("%d",&y2);
    int x3,y3;
    printf("ENTER THE COORDINATE X3:");
    scanf("%d",&x3);
    printf("ENTER THE COORDINATE Y3:");
    scanf("%d",&y3);
    int m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2) printf("ALL POINTS LIES ON THE SAME AXIS OR LINE");
    else printf("DOES NOT LIES ON THE SAME LINE OR AXIS");
    return 0;
}