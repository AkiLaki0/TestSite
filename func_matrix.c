#include <stdio.h>
#include <stdlib.h>
#include "func_prot.h"
#include <time.h>
void outMatrix(int **, int, int);

void func(void) {
	int i,j;
int matrixRow = 10, matrixColumn = 6;
int **ptrMatrix = (int **) malloc(matrixRow * sizeof(int *));

puts("Filling the matrix with the random values:");
for (i = 0; i < matrixRow; ++i) {
ptrMatrix[i] = (int *) malloc(matrixColumn * sizeof(int));
}
for (i = 0; i < matrixRow; ++i) {
for (j = 0; j < matrixColumn; ++j) {
ptrMatrix[i][j] = rand() % 101 - 50;
}
}
outMatrix(ptrMatrix, matrixRow, matrixColumn);

puts("Finding the local maximum:\n");
for (i = 0; i < matrixRow; ++i) {
printf(" matrix[%d][%d] = %d ", i, (ptrMatrix[i][0] > ptrMatrix[i][1]) ? (0) : (1), (ptrMatrix[i][0] > ptrMatrix[i][1]) ? (ptrMatrix[i][0]) : (ptrMatrix[i][1]));
for (j = 1; j < matrixColumn; ++j) {
if (ptrMatrix[i][j] > ptrMatrix[i][j-1] && ptrMatrix[i][j] > ptrMatrix[i][j+1]) {
printf(" matrix[%d][%d] = %d ", i, j, ptrMatrix[i][j]);
}
printf("\n");
}
}
outMatrix(ptrMatrix, matrixRow, matrixColumn);
return 0;
}

void outMatrix(int **matrix, int matrix_row, int matrix_column) {
int i,j;
for (i = 0; i < matrix_row; ++i) {
for (j = 0; j < matrix_column; ++j) {
printf("%d ", matrix[i][j]);
}
puts("\n");
}
}
