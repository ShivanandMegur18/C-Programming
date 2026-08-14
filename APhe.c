#include<stdio.h>
int main()
{
    // char i;
    // for(i='@'; i<='z';i++){
    //     printf("hello world %c\n",i);
    // }
    // return 0;
    int n;
    int a;
    printf("enter the n value\n");
    scanf("%d",&n);

    int i=1;
    
    while(i<=10){
        a=i*n;
        printf("%d * %d = %d \n",n,i,a);
        i++;
    }
    return 0;
}