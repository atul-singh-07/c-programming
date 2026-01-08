#include<stdio.h>
void fun(int a){
    a=7;
    return;
}
int main(){
    int a=5;
    printf("%d\n",a);
    fun(a);
    printf("%d\n",a);
    return 0;
}// HERE THE OUTPUT OF THIS CODE IS 5 AND 5 BECAUSE WHEN WE PASS AN INTEGER IN AFUNCTION IT
// IS PASSED USING CALL BY VALUE WHICH DOES NOT CREATE ANY LINK BETWEEN BOTH FUNCTIONS