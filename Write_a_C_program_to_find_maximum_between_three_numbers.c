#include <stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    printf("enter first number\n");
    scanf("%d",&num1);
    printf("enter second number\n");
    scanf("%d",&num2);
    printf("enter third number\n");
    scanf("%d",&num3);

    if(num1>num2&&num1>num3){
        printf("first number is greater\n");
    }
    else if(num2>num1&&num2>num3){
        printf("second number is greater\n");
    }
    else{
        printf("third number is greater\n");
    }

}