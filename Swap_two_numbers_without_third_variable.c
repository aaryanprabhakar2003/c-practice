#include <stdio.h>
int main(){
    int a;//4
    int b;//5
    scanf("%d",&a);
    scanf("%d",&b);
    int c;
    c=a+b;//9
    a=c-a;
    b=c-b;

    printf("value of a after swapping = %d\n",a);
    printf("value of b after swapping = %d\n",b);
}