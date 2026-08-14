#include<stdio.h>
int main(){
    int i;
    int j;
    for(i=1; i<6; i++){
        for(j=1-i;j<0;j++){
            printf("* ");
        }
        printf("* \n");
    }
    return 0;
}