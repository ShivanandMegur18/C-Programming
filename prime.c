#include<stdio.h>

int main(){
    int n,i,count=1;
    printf("enter the n value : \n");
    scanf("%d",&n);
    // if(n<=1)
    //     printf("it not prime");

    for(i=1; i<=n%2; i++){
        if(n%i == 0){
            count++;
            printf("%d\n",count);
        }
    }
    if(count == 2){
        printf("its primr\n");
    }
    else{
        printf("not primt\n");
    }
    return 0;
}