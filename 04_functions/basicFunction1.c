#include<stdio.h>
void england(){
    printf("YOU ARE IN ENGLAND\n"); //6
    return;//7
}
void australia(){
    printf("YOU ARE IN AUSTRALIA\n");//4
    england();// calling englang //5
    return;//8
}
void india(){
    printf("YOU ARE IN INDIA\n"); // 2
    australia();// calling australia //3
    return;//9
}
int main(){
    india();// callin india //1
    return 0;// 10
}