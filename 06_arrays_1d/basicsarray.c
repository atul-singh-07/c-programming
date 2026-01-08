#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[3]);

    // UPDATING THE ARRAY
    arr[3]=100;
    printf("%d\n",arr[3]);// {1,2,3,100,5} 

    // FLOAT DATA TYPE ARRAY
    float c[3]={1.2,2.2,1.5};
    printf("%f\n",c[0]);
    printf("%f\n",c[1]);

    // CHARACTER DATA TYPE ARRAY
    char ch[5]={'%','b','c','d','#'};
    printf("%c\n",ch[0]);
    printf("%c\n",ch[4]);

    return 0;
}