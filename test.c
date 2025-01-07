#include <stdio.h>
#include <cs50.h>

int nums[] = {0,0,1,1,1,2,2,3,3,4};
int n = sizeof(nums) / sizeof(nums[0]);

int main() {
	for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        if (nums[i] == nums[j])
        {
            for(int k = j; k < n-1; k++)
            nums[k] = nums[k+1];
        }

    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
}

