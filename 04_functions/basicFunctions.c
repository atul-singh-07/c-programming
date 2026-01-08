#include<stdio.h>
void greet(){// FUNCTION 
    printf("GOOD MORNING\n");
    printf("HOW ARE YOU\n");
    return;// KHATAM
}
int main(){// FIRST THE COMPILER WILL VISIT THE MAIN() AND THEN TO ANY OTHER PART OF THE CODE
    greet();//FUNCTION CALLING
    greet();
    greet();
    return 0;
}
