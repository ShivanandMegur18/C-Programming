#include<stdio.h>

int main(){
    int count=0;
    char name[] = {'s','h','i',   'v','a','\0'};
    for(int i=0; name[i] != '\0' ; i++){
        count++;
       
    }
    printf("%d",count);
    return 0;
}
