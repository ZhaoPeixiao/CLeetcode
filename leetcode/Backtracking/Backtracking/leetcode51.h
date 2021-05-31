#pragma once
#include<stdio.h>
#include<malloc.h>
#include <string.h>
#include<math.h>


typedef struct Queens {
	char*** queens[1000];  /* result array */
	int count;	/* point to the free position in queen[1000] */
}Queens, *pQueens;

void nqueen(int row, int n, int* res, pQueens Q);
void save(int n, int* res, pQueens Q);
bool check(int row, int* res);

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
char*** solveNQueens(int n, int* returnSize, int** returnColumnSizes) {
	if (n < 1 || returnSize == NULL) {
		return NULL;
	}
	pQueens Q = (pQueens)calloc(1, sizeof(Queens));
	int* res = (int*)calloc(n, sizeof(int));
	memset(res, 0, sizeof(res));
	nqueen(0, n, res, Q);
	*returnSize = Q->count;
	(*returnColumnSizes) = (int*)malloc(Q->count * sizeof(int));
	for (int i = 0; i < Q->count; i++) {
		(*returnColumnSizes)[i] = n*n;
	}
	return (Q->queens);
}

// back-tracking
void nqueen(int row, int n, int* res, pQueens Q) {
	if (row == n) {	/* meet the end of chessboard, save result */ 
		save(n, res, Q);
	}
	// back-tracking from 0 to n-1
	for (int i = 0; i < n; i++) {
		res[row] = i;
		if (check(row, res)) {
			nqueen(row + 1, n, res, Q);
		}
	}
}

// save the results to Q->queens
void save(int n, int* res, pQueens Q) {
	char** matrix = (char**)malloc(n * sizeof(char*));
	for (int i = 0; i < n; ++i) {
		matrix[i] = (char*)calloc((n + 1), sizeof(char));
		int j;
		for (j = 0; j < n; ++j) {
			matrix[i][j] = '.';
		}
		matrix[i][res[i]] = 'Q';
	}
	*(Q->queens)[Q->count] = matrix;
	Q->count++;
}

bool check(int row, int* res) {
	for (int i = 0; i < row; i++) {
		if (res[row] == res[i] || abs(res[row] - res[i]) == (row - i)) {
			return false;
		}
	}
	return true;
}