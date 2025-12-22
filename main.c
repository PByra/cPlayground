#include <stdio.h>

int square(int a);

int main()
{
    int array[3] = {1, 3, 4};
    int *ptrarray = array;

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(ptrarray+i));
    }

    return(0);
}   


