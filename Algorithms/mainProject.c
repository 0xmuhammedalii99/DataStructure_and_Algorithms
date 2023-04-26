/*
 * Program Name     : Algorithms
 * Auther           : Muhammed Ali Ibrahim Ahmed
 * Data             : 26 April,2023
 * Content          : - Searching { Binary , Linear } - Sorting { Bubble , Insersion , Selection }
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Drivers/TYPES.h"
#include "FunctionProtoypes.h"
void main(void)
{
    int size, index, SearchNumber, *Data;
    Data = (int *)malloc(size * (sizeof(int))); //* Make user select the size he want :)
    printf("Enter the size of data :\t");
    scanf("%d", &size);
    /*SelectionSort(size, Data);*/
    /*BubbleSort(size, Data);*/
    /*BinarySearch(size,Data);*/
    /*LinearSearch(size, Data);*/
    /*InsertionSort(size, Data);*/
    GetData(size, Data);
    BubbleSort(size, Data);
    BinarySearch(size, Data);
    PrintData(size, Data);
    free(Data);
}
