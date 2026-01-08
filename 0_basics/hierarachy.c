#include<stdio.h>
int main(){
    int i = 2*3/4+4/4+8-2+5/8;// ON EVALUATING ANY EXPRESSION WE NEED TO CONSIDER PRECEDENCE RULE OF OPERATOR AS IN
    printf("THE ANSWER OF THE EXPRESSION IS:%d",i);//MATH WE USE BODMAS WE ALSO USE BODMAS WITH LITTLE MODIFICATION AS
    return 0;// [B % /=* -=+]
}// WHERE B: BRACKET
 //       %: MODULUS
 //       /*: HAVE SAME PREDENCE AND ON EVALUATING NEED TO CONSIDER LEFT TO RIGHT RULE
 //       -+: SAME AS ABOVE
 // IF I ENTER A EXAMPLE OF HIERARCHY OF OPERATOR WHICH BY COPING IT FROM HERE AND PERFORMING ON PLATFORM CAN BE
 // GOOD FOR UNDERSTANDING AS:
 /*#include<stdio.h>
  int main(){
    int i=2,j=3,k,l;
    float a,b;    k=i/j*j;
    l=j/i*i;
    a=i/j*j; 
    b=j/i*i;
    printf("%d %d %f %f",k,l,a,b);
    return 0;
  }// THE OUTPUT FOR THIS WILL BE: 0 2 0.000000 2.000000*/
  // BY REMOVING COMMENT U CAN UNDERSTAND BETTER BY DOING DRY RUN OF THE CODE
 