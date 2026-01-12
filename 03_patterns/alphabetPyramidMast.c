#include<stdio.h>
//     A        # # #   A                               A
//   A B A ---> # #  +  A B A  ---> now break this into A B   +  A
// A B C B A    #       A B C B A                       A B C    B A 
//A B C D C B A         A B C D C B A                   A B C D  C B A 
int main(){
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int q=1;q<=n-i;q++){// for spaces or hash
            printf("# ");
        }
        for(int j=1;j<=i;j++){
            int x=j+64;
            char ch=(char)x;// type casting A
            printf("%c ",ch);//             A B
        }//                                 A B C 
        int a=i-1;//                        A B C D 
        for(int k=1;k<=i-1;k++){// left over A
            int y=a+64;//                    B A
            char ch=(char)y;//type casting   C B A
            printf("%c ",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}// NOTE:remove hash for space printing