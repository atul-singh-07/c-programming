#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER FOR PATTERN PRINTING:");
    scanf("%d",&n);
    //1
    //AB
    //123
    //ABCD
    //12345
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int d=a+64;
            char ch=(char)d;// TYPE CASTING
            if(i%2!=0){// TAKING I IN THE CONDITION BECAUSE I CONTROLS THE NUMBER OF ROWS
                printf("%d",a);// IN THE CODE
            }
            else{
                printf("%c",ch);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}