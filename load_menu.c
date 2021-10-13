#include <stdio.h>
#include <stdlib.h>
#include "load_lib.h"
#include "func_prot.h"

int main(void)
{
    int a = 0, b = 1;

    puts("--------------------------------");
    puts("|1.| Library with array.    |");
    puts("|2.| Library with matrix.    |");
    puts("|3.| Exit.                    |");
    puts("--------------------------------");
    printf("Enter the number of option: ");
    while (b)
    {
        scanf("%d", &a);
        if (a == 1)
            LoadRun("func_array.dll");
            //funcA();
        if (a == 2)
            LoadRun("func_matrix.dll");
            //funcM();
        if (a == 3)
            b = 0;
        else
            printf("\nEnter the number in range from 1 to 3: ");
    }
    return 0;
}
