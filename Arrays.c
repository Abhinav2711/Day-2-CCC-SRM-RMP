#include<stdio.h>
int main()
{
    int i, arr[5]; //creates array arr of size 5
    for (i = 0; i < 5; i++) // loop from i = 0 to i = 4
    {
        scanf("%d", &arr[i]);//replace  by arr[i] to take input for ith element
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i] );//replace  to print the ith element.
    }
    return 0;
}
