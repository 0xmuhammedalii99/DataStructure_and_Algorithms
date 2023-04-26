#include <stdio.h>
#include "../Drivers/TYPES.h"
#include <stdbool.h>
void GetData(int sizef, int num[])
{
    for (int index = 0; index < sizef; index++)
    {
        printf("Enter element (%d) :", index + 1);
        scanf("%d", &num[index]);
    }
}
void PrintData(int sizef, int num[])
{
    int i;
    printf("____________________________\n");
    for (i = 0; i < sizef; i++)
        printf("%d\n", *(num + i));
}
void LinearSearch(int sizef, int num[])
{
    int searchintNumber, position;
    bool test = false;
    printf("Enter the number you searched for:\t");
    scanf("%d", &searchintNumber);
    for (int index = 0; index < sizef; index++)
        if (searchintNumber == num[index])
        {
            position = index;
            test = true;
            break;
        }
    if (test)
        printf("The Number in posotion %d\n", position + 1);
    else
        printf("The number you searched for in't found\n");
}
void SelectionSort(int sizef, int num[])
{
    int temp;
    for (int index1 = 0; index1 < sizef - 1; index1++)
        for (int index2 = index1 + 1; index2 < sizef; index2++)
            if (num[index1] > num[index2])
            {
                temp = num[index1];
                num[index1] = num[index2];
                num[index2] = temp;
            }
}
void BubbleSort(int sizef, int num[])
{
    int replace;
    bool sorted;
    do
    {
        sorted = true;
        for (int i = 0; i < sizef - 1; i++)
            if (num[i] > num[i + 1])
            {
                replace = num[i];
                num[i] = num[i + 1];
                num[i + 1] = replace;
                sorted = false;
            }
    } while (!sorted);
}
void BinarySearch(int sizef, int num[])
{
    int searchingNum, upper, lower, middle, position;
    bool test = false;
    printf("Enter the number you searching for : \t");
    scanf("%d", &searchingNum);
    lower = 0;
    upper = sizef - 1;
    do
    {
        middle = (upper + lower) / 2;
        if (searchingNum == num[middle])
        {
            position = middle;
            test = true;
            break;
        }
        else if (searchingNum > num[middle])
            lower = middle + 1;
        else
            upper = middle - 1;
    } while (lower <= upper);
    if (test)
        printf("The number you searched for is in posotion %d", position);
    else
        printf("The number is't found in any posotion\n");
}
void InsertionSort(int sizef, int num[])
{
    int check, i, j;
    for (i = 1; i < sizef; i++) //* For loop to spin to each element
    {
        check = num[i];
        j = i - 1;
        while (j >= 0 && num[j] > check)
        {
            num[j + 1] = num[j];
            j -= 1;
        }
        num[j+1]=check;
    }
}
