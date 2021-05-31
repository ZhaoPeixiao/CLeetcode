#pragma once
#include<stdio.h>
#include<malloc.h>
#include <string.h>

void helper(int* nums, int numsSize, int** res, int* resultIdx, int* tempBuffer, int tempSize) {
	int i, j;
	if (tempSize == numsSize) {
		memcpy(res[(*resultIdx)++], tempBuffer, numsSize * sizeof(int));
	}
	else {
		for (i = 0; i < numsSize; i++) {
			for (j = 0; j < tempSize; j++) {
				if (tempBuffer[j] == nums[i]) {
					break;
				}
			}
			if (j < tempSize) {
				continue;
			}
			tempBuffer[tempSize] = nums[i];
			helper(nums, numsSize, res, resultIdx, tempBuffer, tempSize + 1);
		}
	}
}


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
	int** res;
	int count = 1;
	int resultIdx = 0;
	int* tempBuffer = (int*)malloc(numsSize * sizeof(int));
	int tempSize = 0;
	for (int i = 1; i <= numsSize; i++) {
		count *= i;
	}
	res = (int**)malloc(count * sizeof(int*));
	(*returnColumnSizes) = (int*)malloc(count*sizeof(int));
	for (int i = 0; i < count; i++) {
		res[i] = (int*)malloc(numsSize * sizeof(int));
		(*returnColumnSizes)[i] = numsSize;
	}

	helper(nums, numsSize, res, &resultIdx, tempBuffer, tempSize);

	*returnSize = count;
	return res;
}

