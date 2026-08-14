// #include<stdio.h>

// // int sum(int a, int b);
// void printTable(int n);

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);

//     printTable(n);

//     return 0;


// }
// void printTable(int n){
//     for(int i=1; i<=10; i++){
//         printf("%d \n",i*n);
//     }
// }



// #include<stdio.h>

// void calculatePrice(float value);

// int main(){

//     float value = 100.0;
//     calculatePrice(value);
//     printf(" price is :%f ", value);
//     return 0;
// }

// void calculatePrice(float value){
//     value = value + (0.18 * value);
//     printf("final price is :%f \n", value);
// }


#include<stdio.h>
#include<math.h>

float squateArea(float side);
float circuleArea(float rad);
float rectanglearea(float a, float b);

int main(){
    float a=5.00;
    float b=10.00;

    printf("area is :%f",rectanglearea(a,b));

    return 0;
}

float squateArea(float side){
    return side * side;
}

float circuleArea(float rad){
    return 3.14 * rad * rad;
}
float rectanglearea(float a, float b){
    return a * b;
}