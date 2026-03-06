#include<stdio.h>
int main(){
    int student;
    printf("Enter number of Student:");
    scanf("%d",&student);
    // Taking input to array

    int arr[student][3];
    
    for(int i=0;i<student;i++){
        printf("Enter marks of student %d\n",i+1);
        for(int j=0;j<3;j++){
            // using conditional statement to manage print statement of PCM
            if(j==0){
                printf("Enter P marks:");
                scanf("%d",&arr[i][j]);
            }
            else if(j==1){
                printf("Enter C marks:");
                scanf("%d",&arr[i][j]);
            }
            else{
                printf("Enter M marks:");
                scanf("%d",&arr[i][j]);
            }
        }
    }
    // printing the 2d array
    for(int i=0;i<student;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}