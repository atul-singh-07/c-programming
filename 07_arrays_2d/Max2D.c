#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3]={1,2,3,4,5,10,7,8,9};// MATRIX VALUES
    int max=INT_MIN;
    int indexi=0;
    int indexj=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){// JUST COMPARING INT_MIN WITH arr[i][j] AND STORING THE 
                max=arr[i][j];// MAXIMUM VALUE IN THE MAX VARIABLE
                indexi=i;// TO STORE THE i OF MAX
                indexj=j;// TO STORE THE j OF MAX
            }
        }
    }
    printf(" THE MAXIMUM VALUE OF THE MATRIX IS:%d\n",max);
    printf("AND THE INDEX  OR THE POSITION OF MAXIMUM ELEMENT IS (%d,%d)",indexi,indexj);
    
    return 0;
}