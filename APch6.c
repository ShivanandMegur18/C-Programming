//pointers  

#include<stdio.h>

// int main(){
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%d", *(&age)); 
//     return 0;
// }

// int main()
// {
//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);
// printf("\n");
//     *ptr += 5;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);
// printf("\n");
//     (*ptr)++;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);
// }


// int main(){
    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;

    // printf("%f\n",**pptr);
    // printf("")
// }


//     void square(int n);
//     void _square(int *n);

//     int main(){
//         int number = 4;
//         square(number);
//         printf("number = %d\n", number);

//         _square(&number);
//         printf("number = %d\n", number);
//         return 0;
//     }
// //call by value
//     void square(int n){
//         n = n * n;
//         printf("squear = %d\n",n);
//     }

//     void _square(int *n){
//         (*n) = (*n) * (*n);
//         printf("squear = %d\n",*n);
//     }




void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x=3, y=5;
    swap(x,y);
    printf("x= %d & y = %d\n",x ,y);

    _swap(&x,&y);
    printf("x= %d & y = %d\n",x ,y);
    return 0;
}

void swap(int a, int b){
    int t=a;
        a=b;
        b=t;
    printf("a = %d & b = %d \n",a ,b);

}
void _swap(int *a, int *b){
    int t=*a;
        *a=*b;
        *b=t;
    printf("a = %d & b = %d \n",*a ,*b);
}



