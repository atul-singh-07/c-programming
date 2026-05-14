#include<stdio.h>
void swap(int*a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int a;
    printf("Enter A:");
    scanf("%d",&a);

    int b;
    printf("Enter B:");
    scanf("%d",&b);

    swap(&a,&b);
    printf("A:%d , B:%d",a,b);
    return 0;
}