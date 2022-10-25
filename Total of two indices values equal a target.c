// C programming to get the indices of the two numbers of a given array of integers,
// such that the sum of the two numbers equal to a specific target.

#include <stdio.h>
#include <stdlib.h>

struct object
{
    int val;
    int index;
};

static int compare(const void *a, const void *b)
{
    return ((struct object *)a)->val - ((struct object *)b)->val;
}

static int *two_sum(int *nums, int nums_size, int target)
{
    int i, j;
    struct object *objes = malloc(nums_size * sizeof(*objes));
    for (i = 0; i < nums_size; i++)
    {
        objes[i].val = nums[i];
        objes[i].index = i;
    }
    qsort(objes, nums_size, sizeof(*objes), compare);

    int *results = malloc(2 * sizeof(int));
    i = 0;
    j = nums_size - 1;
    while (i < j)
    {
        int diff = target - objes[i].val;
        if (diff > objes[j].val)
        {
            while (++i < j && objes[i].val == objes[i - 1].val)
            {
            }
        }
        else if (diff < objes[j].val)
        {
            while (--j > i && objes[j].val == objes[j + 1].val)
            {
            }
        }
        else
        {
            results[0] = objes[i].index;
            results[1] = objes[j].index;
            return results;
        }
    }
    return NULL;
}

int main(void)
{
    int nums[] = {4, 2, 1, 5};
    int ctr = sizeof(nums) / sizeof(*nums);
    int target = 7;
    int i;
    printf("Original Array: ");
    for (i = 0; i < ctr; i++)
    {
        printf("%d  ", nums[i]);
    }
    printf("\nTarget Value: %d", target);
    int *indexes = two_sum(nums, ctr, target);
    if (indexes != NULL)
    {
        printf("\nIndices of the two numbers whose sum equal to target value: %d", target);
        printf("\n%d %d\n", indexes[0], indexes[1]);
    }
    else
    {
        printf("Not found or matched\n");
    }

    return 0;
}
