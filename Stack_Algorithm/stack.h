#define size 10
#define DataType int
#include <stdbool.h>
typedef struct
{
    DataType Data[size];
    int top;
} Stack;

void InitializeStack(Stack *pointer);
bool IsFull(Stack *pointer);
bool IsEmbty(Stack *pointer);
void Push(DataType Element, Stack *pointer);
void Pop(DataType *element, Stack *pointer);
void StackSize(Stack *pointer);
void ClearStack(Stack *pointer);
void PrintStack(DataType *PointTOElement, Stack *PointToStack);
void ReadData(Stack *PointToStruct);
