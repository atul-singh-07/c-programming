#include<stdio.h>
int main(){
   int x=5;
   printf("%d",x);
   printf("%d",x++);// FIRST USE THE VALUE OF X AND THEN UPDATE THE VALUE OF X
   printf("%d",++x);// FIRST UPDATE THE OF X AND USE THE UPDATED VALUE OF X
   return 0;
}