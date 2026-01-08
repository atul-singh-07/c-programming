#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    if(n%5==0){//#1
        if(n%3==0){
            printf("THE NUMBER %d IS DIVISIBLE BY 5 AND 3",n);//#2
        }
        else{
            printf("THE NUMBER %d IS NOT DIVISIBLE BY 5 AND 3",n);//#2
        }
    }
    else{//#1
         printf("THE NUMBER %d IS NOT DIVISIBLE BY 5 AND 3",n);
    }
    return 0;
}