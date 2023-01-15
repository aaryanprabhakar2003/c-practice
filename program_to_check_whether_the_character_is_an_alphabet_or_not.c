#include <stdio.h>
int main(){
    char user;
    scanf("%c",&user);
    if(user>='a'&&user<='z'||user>='A'&&user<='Z'){
        printf("it is alphabet\n");

    }
    else{
        printf("it is not alphabet\n"); 
    }
}