#include<stdio.h>

// void TwoFun();
// void GBfun();

// int main(){

//     TwoFun();
//     TwoFun();
//     TwoFun();
//     TwoFun();
//     GBfun();

//     return 0;
// }

// void TwoFun(){
//     printf("Hello\n");
// }
// void GBfun(){
//     printf("Good bye\n");
// }


// void namaste();
// void bonjorur();


// int main(){

//     printf("enter f for french and i for indian\n");
//     char ch;
//     scanf("%c",&ch);

//     if(ch == 'f'){
//         bonjorur();
//     }
//     else if(ch == 'i'){
//         namaste();
    
//     }
//     else{
//         printf("undefined");
//     }


//     return 0;
// }

// void namaste(){
//     printf("Namaste\n");
// }
// void bonjorur(){
//     printf("Bonjour\n");
// }





// int sum(int a, int b);

// int main(){
//     int a, b;
//     printf("enter the first number : \n");
//     scanf("%d", &a);

//     printf("enter the second number : \n");
//     scanf("%d", &b);

//     int s= sum(a,b);
//     printf("sun is : %d \n",s);

//     return 0;
// }
// int sum(int x, int y){
//     return x+y;
// }



void Table(int n);

int main(){
    int n;
    printf("enter the n value :  \n");
    scanf("%d",&n);
    Table(n);
    return 0;
}
void Table(int n){
    for(int i=1; i<=10; i++){
        printf("%d\n",i*n);
    }
}