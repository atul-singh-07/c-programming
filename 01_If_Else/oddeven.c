#include<stdio.h>
int main(){
    int n;// dabba ban gaya
    printf("ENTER POSITIVE INTEGER:");
    scanf("%d",&n);// humne ne dabbe mein value dal di,n=7
    if (n%2==0){// but if n=7 then the remainder will be not equal to zero then
        printf("IT IS AN EVEN NUMBER");// then this statement will not run and will skip this and will move to the other statement
    }
    if (n%2!=0){//this is another if statement which will run for n = 7 which will return odd in return
        printf("THE ENTERED NUMBER IS ODD");
    }
    return 0;
}/*   if (n%2!=0)//FOR AVOIDING THIS AND FOR AVOIDING DOUBLE CHECHING
 WE CAN USE ELSE STATEMENT AS:
 else{
      printf("IT IS AN ODD NUMBER");
}*/