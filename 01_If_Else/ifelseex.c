#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    if (n%5==0){//#1[IF THIS CONDITION WILL BE TRUE THEN ONLY]
        if(n%3==0){//#2[THIS CONDITION WILL WE CHECKED AND ON FINDING RIGHT PRINT STATEMENT]
            printf("THE NUMBER IS DIVISIBLE BY 5 AND 3");// WILL GET EXECUTED
        }
        else{//#2// OTHERWISE THIS
            printf("THE NUMBER IS NOT DIVISIBLE BY 3 AND 5");
        }
    }
    else{//#1 THESE IF ELSE ARE LINKED[IF THE OUTER IF STATEMENT GET FALSE THEN THIS ELSE ]
        printf("THE NUMBER IS NOT DIVISIBLE BY 5 AND 3");//STATEMENT WILL GET RUN
    }
    return 0;
}