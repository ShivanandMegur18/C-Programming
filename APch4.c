#include<stdio.h>

// int main()
// {
// printf("upper case\n");
//     for(char ch='a'; ch<='z'; ch++){
//         for(char chh='A'; chh<='Z'; chh++){

//             printf("  %c \n",chh);
//         }

//         printf(" %c \n ", ch);
//     }
    


    // int i, num, a;
    // printf("enter the number :");
    // scanf("%d",&num);

    // for(i=1;i<=10;i++){
    //     a = num * i;
    //     printf("%d\n",a);


    //}
//}



int areaofRect(int length, int breadth)
{
     int area;
    area = length * breadth;
    return area;
} 
int main()
{
   
    int l=10, b=5;
    int area = areaofRect(l, b);
    printf("%d \n",area);
}
