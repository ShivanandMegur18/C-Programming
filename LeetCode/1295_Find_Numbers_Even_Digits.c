/*
Problem: Find Numbers with Even Number of Digits
LeetCode Problem: 1295
Difficulty: Easy
Language: C
*/

int findNumbers(int* nums, int numsSize)
{
int count = 0;

for (int i = 0; i < numsSize; i++)
{
    int digits = 0;
    int num = nums[i];

    while (num > 0)
    {
        digits++;
        num = num / 10;
    }

    if (digits % 2 == 0)
    {
        count++;
    }
}

return count;

}
