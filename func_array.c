#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "func_prot.h"
void outArray(int *, int);

void func(void)
{
int i;
int arraySize = 45;
int *array = (int *) malloc(arraySize * sizeof(int));
for (i = 0; i < arraySize; ++i)
{
array[i] = rand() % 101 - 50;
}

puts("Filling the array with the random values:");
outArray(array, arraySize);

puts ("\n\nFinding the local maximum: ");
printf(" a[%d] = %d", (array[0] > array[1]) ? (0) : (1), (array[0] > array[1]) ? (array[0]) : (array[1]));

for (i = 1; i < arraySize; ++i)
{
if (array[i] > array[i-1] && array[i] > array[i+1]) {
printf(" a[%d] = %d", i, array[i]);
}
}
puts("\n");
outArray(array, arraySize);
return 0;
}

void outArray(int *ptrArray, int array_size)
{
	int i;
for (i = 0; i < array_size; ++i)
printf("%4d;", ptrArray[i]);
puts(" ");
}
