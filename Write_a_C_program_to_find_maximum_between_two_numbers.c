#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf("enter first number\n",num1);
    scanf("%d",&num1);
    printf("enter second number\n",num2);
    scanf("%d",&num2);
    if(num1>num2){
        printf("first number is greater than second number\n");
    }
    else{
        printf("second number is greater than first number\n");
    }
}