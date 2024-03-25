/*
Author: Sabrina Kichukova
Purpose: This program calculates XOR for variable number of inputs.
*/

#include <stdio.h>
#include <stdlib.h>

int xor(int a, int b)
{
    int result = ((a & ~b) || (~a & b));
    return result;
}

int main()
{
    int num;

    printf("\nEnter number of inputs: \n");
    scanf("%d", &num);

    int xorArr[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &xorArr[i]);
    }

    int result = xorArr[0];

    for (int i = 1; i < num; i++)
    {
        result = xor(result, xorArr[i]);
    }

    printf ("%d\n", result);

    return EXIT_SUCCESS;
}
