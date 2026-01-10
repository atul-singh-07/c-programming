#include<stdio.h>
int main(){
    int n;
    int temp;
    int ld;
    for(int i=1;i<=500;i++){
        n=i;
        temp=i;
        int sum=0;// HERE WE NEED TO REINITIALIZE THE SUM AT EVERY ITERATION THAT WHY int 
        while(n>0){//SUM IS DECLARED IN LOOP
            ld=n%10;
            sum=sum+ld*ld*ld;// CONCEPT KEY OR FORMULA
            n=n/10;
        }
        if(temp==sum) printf("%d\n",temp);// HERE COMPARISON IS ALSO HAPPENING INSIDE LOOP 
    }
    return 0;
}