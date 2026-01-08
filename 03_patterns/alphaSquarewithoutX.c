#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    int d;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d=j+64;// HERE WE HAVE USED THE LOOPING VARIABLE FOR GETTING THAT 1 AGAIN AND 
            char ch=(char)d;// AGAING IN EVERY LOOP AS COMPARED TO alphabetsquare WHERE
            printf("%c ",ch);// WE HAVE USED A XTRA VARIABLE a FOR GETTING THAT 1 IN
        }//                     EVERY LOOP
        printf("\n");
    }
    return 0;
}