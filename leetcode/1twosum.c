// #include <stdio.h>

// int main() {
//     int numSize, target;

//     printf("Enter size of array: ");
//     scanf("%d", &numSize);

//     int num[numSize];

//     printf("Enter the elements:\n");
//     for(int i = 0; i < numSize; i++) {
//         scanf("%d", &num[i]);
//     }

//     printf("Enter target: ");
//     scanf("%d", &target);

//     // Brute-force approach
//     for(int i = 0; i < numSize; i++) {
//         for(int j = i + 1; j < numSize; j++) {
//             if(num[i] + num[j] == target) {
//                 printf("Indices: %d %d\n", i, j);
//                 return 0;  // stop after finding the answer
//             }
//         }
//     }

//     printf("No solution found\n");
//     return 0;
// }/




// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int numSize, target;

//     scanf("%d",&numSize);

//     int num[numSize];

//     for(int i = 0; i < numSize ; i++){
//         scanf("%d",&num[i]);
//     }

//     scanf("%d",&target);

//     for(int i = 0; i < numSize ; i++){
//         for(int j = i+1; j < numSize; j++){
//             if(target == num[i] + num[j]){
//                 printf("%d %d",i, j);
//                 return 0;
            
//             }
//         }
//     }
//     return 0;

// }


#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;  // IMPORTANT
                return result;
            }
        }
    }
    
    *returnSize = 0;
    return NULL;
}

