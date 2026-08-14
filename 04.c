// #include<stdio.h>
// void main()
// {
//    /* int a=10,c,d;
//     c=a<<4;
//     d=a>>2;
//     printf("%d\n",c);
//     printf("%d",d);*/
//     int a;
//     a=printf("shiva");
//     printf("%d",a);
// }



// #include <stdio.h>

// int marks_summation(int* marks, int number_of_students, char gender) {
//     int sum = 0;

//     if(gender == 'b') {
//         for(int i = 0; i < number_of_students; i += 2) {
//             sum += *(marks + i);   // pointer access
//         }
//     }
//     else if(gender == 'g') {
//         for(int i = 1; i < number_of_students; i += 2) {
//             sum += *(marks + i);   // pointer access
//         }
//     }

//     return sum;
// }

// int main() {
//     int number_of_students;
//     scanf("%d", &number_of_students);

//     int marks[number_of_students];

//     for(int i = 0; i < number_of_students; i++) {
//         scanf("%d", &marks[i]);
//     }

//     char gender;
//     scanf(" %c", &gender);

//     int result = marks_summation(marks, number_of_students, gender);
//     printf("%d", result);

//     return 0;
// }

