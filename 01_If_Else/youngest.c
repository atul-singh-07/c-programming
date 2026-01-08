#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE AGE OF RAM:");
    scanf("%d",&a);
    printf("ENTER THE AGE OF SHYAM:");
    scanf("%d",&b);
    printf("ENTER THE AGE OF AJAY:");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("RAM IS YOUNGEST WITH AGE %d",a);
    }
    else if(b<c && b<a){
        printf("SHYAM IS YOUNGEST WITH AGE %d",b);
    }
    else if(c<a && c<b){// HERE IN ABOVE BOTH STATEMENT WE HAVE USED ELSE IF AS IF WE USED IF
        printf("AJAY IS YOUNGEST WITH AGE %d",c);

    }
    else{// THEN THIS ELSE WILL GET ONLY LINKED WITH THE LAST IF STATEMENT AND IF OTHER IF STATEMENT
        printf("AS THEY ALL ARE DISTINCT BROTHER THEY COULD NOT HAVE AGE 0 OR EQUAL");
    }
    return 0;// ARE GETTING SATISFIED THEN ALSO THE ELSE PART GET EXECUTED FOR THIS WE HAVE USED
}//ELSE IF IN PLACE OF IF .