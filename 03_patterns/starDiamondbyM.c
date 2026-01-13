#include<stdio.h>
int main(){
// THIS CODE IS COMPLETELY MADE BY STEP BY STEP REAL TIME OBSERVATION OF PATTERNS    
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int q=1;q<=n-i;q++){//STEP 1: printed spaces with n-i+1-1 condition
            printf("  ");//  # # #
        }//                  # #
        //                   #
        for(int j=1;j<=i;j++){// STEP 2: printed a normal triangle *
            printf("* ");//                                        * *
        }//                                                        * * *
        for(int k=1;k<=i-1;k++){//                                 * * * * 
            printf("* ");// STEP 3: printed the leftover stars *
        }//                                                    * *
        printf("\n");//                                        * * *
    }
//  IN ACTUAL THESE TOP FIRST THREE LOOPS ARE ATTEMPTED TO PRINT A STAR PYRAMID 
//       *
//     * * *
//   * * * * *
// * * * * * * *
    for(int i=1;i<=n;i++){// AND THESE LOOPS ARE ATTEMPTED TO PRINT LOWER PART
        for(int g=1;g<=i;g++){// STEP 1: normal space or hash triangle #
            printf("  ");//                                            # #
        }//                                                            # # #
        for(int l=1;l<=n-i;l++){//                                     # # # #
            printf("* ");//  * * *
        }//                  * * 
        //                   *
        for(int d=1;d<=n-i-1;d++){// approx same loop as above with only difference of -1 
            printf("* ");// attempted to print * *
        }//                                    *
        printf("\n");
    }

    return 0;
}