#include<stdio.h>// BY NESTED IF ELSE 
int main(){
    int ram,shyam,ajay;
    printf("ENTER THE AGE OF RAM:");
    scanf("%d",&ram);
    printf("ENTER THE AGE OF SHYAM:");
    scanf("%d",&shyam);
    printf("ENTER THE AGE OF AJAY:");
    scanf("%d",&ajay);
    if(ram<shyam){//SHYAM TOH YOUNGEST KI RACE SE BAHAR
        if(ram<ajay){
            printf("RAM WITH AGE %d IS YOUNGEST",ram);
        }
        else{
            printf("AJAY WITH AGE %d IS YOUNGEST",ajay);
        }
    }
    else{// IF THIS STATEMENT IS GETTING EXECUTED THAT MEANS SHYAM<RAM
        if(shyam<ajay){// yaha par shyam < ajay
            printf("SHYAM WITH AGE %d IS YOUNGEST",shyam);
        }
        else{
            printf("AJAY WITH AGE %d IS YOUNGEST",ajay);
        }
    }

    return 0;
}