/*
 * Program Name     : Stack Based On Array
 * Auther           : Muhammed Ali Ibrahim Ahmed
 * Data             : 26 April,2023
*/

#include <stdio.h>
#include "stack.h"
int main()
{
    Stack Data, *PointStack = &Data;
    DataType Element, *PointElement = &Element;

    InitializeStack(PointStack);
    ReadData(PointStack);
    StackSize(PointStack);
    PrintStack(PointElement, PointStack);
    StackSize(PointStack);
}