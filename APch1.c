// #include<stdio.h>
// int main(){
//     int age = 20;
//     float pi = 3.14;
//     char logo = '$'
//      printf(" %d %f %c",age, pi, logo);

// return 0;
// }




// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.

// int find_nth_term(int n, int a, int b, int c) {
//     if(n == 1){
//         return a;
//     }
//     if (n == 2){
//         return b;
//     }
//     if (n == 3){
//         return c;
//     }
//     return find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + find_nth_term(n-3,a,b,c);
  
// }

// int main() {
//     int n, a, b, c;
  
//     scanf("%d %d %d %d", &n, &a, &b, &c);
//     int ans = find_nth_term(n, a, b, c);
 
//     printf("%d", ans); 
//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    
    int len = 2*n-1;
    int min1, min2, min;
    
    for (int i=1; i<=len; i++){
        for(int j=1; j<=len; j++){
            
            min1 = i<=len-i ? i -1 : len-i;
            
            min2 = j<=len-j ? j -1 : len-j;
            
            min = min1<=min2 ? min1 : min2;
            
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

