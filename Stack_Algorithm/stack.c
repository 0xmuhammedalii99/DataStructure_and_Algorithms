#include <stdio.h>
#include "stack.h"
#include <stdbool.h>
/*_________________________________________________________________________________*/
/*
 * Stack Functions Implementioan
 */

void InitializeStack(Stack *pointer)
{
    pointer->top = -1;
}
bool IsFull(Stack *pointer)
{
    if (pointer->top == size - 1)
        return true;
    else
        return false;
}
bool IsEmbty(Stack *pointer)
{
    if (pointer->top == -1)
        return true;
    else
        return false;
}
void Push(DataType Element, Stack *pointer)
{
    if (IsFull(pointer))
        printf(" Note : The Stack is Full\n");
    else
    {
        pointer->top++;
        pointer->Data[pointer->top] = Element;
    }
    /**
     * * first increase top to assign the new data int the next index of stack
     */
}
void Pop(DataType *element, Stack *pointer)
{
    if (IsEmbty(pointer))
        printf("Note : The Stack is full\n");
    else
    {
        *element = pointer->Data[pointer->top];
        pointer->top--;
    }
    /**
     * * First store data in element because its the data we need then decrease the top
     */
}
void StackSize(Stack *pointer)
{
    if (IsEmbty(pointer))
        printf("Note : The Stack it empty\n");
    else
        printf("Stack Size is %d\n", pointer->top + 1);
}
void ClearStack(Stack *pointer)
{
    pointer->top = -1;
}
void PrintStack(DataType *PointTOElement, Stack *PointToStack)
{
    for (int index = 1; index <= size; index++)
    {
        Pop(PointTOElement, PointToStack);
        printf("%d\n", *PointTOElement);
    }
}
void ReadData(Stack *PointToStruct)
{
    DataType ELement;
    for (int index = 1; index <= size; index++)
    {
        printf("Enter Your Data : \t");
        scanf("%d",&ELement);
        Push(ELement, PointToStruct);
    }
}