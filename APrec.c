#include<stdio.h>

// void printhw(int count);

// int main(){
//     int count=5;
//     printhw(count);
//     return 0;
// }

// void printhw(int count){
//     if(count == 0){
//         return;
//     }

//     printf("Hello World!\n");
//     printhw(count-1);
// }



void naturalsum(int n);
int sum=0;
int main(){
    naturalsum(5);
    return 0;
}
void naturalsum(int n){
    for(int i=1; i<=n; i++){
        sum += i; 
        printf("%d\n",sum);
    }
}
