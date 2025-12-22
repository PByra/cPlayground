#include <stdio.h>


int main()
{
    int input; 
    int output;

    printf("Enter an integer: ");
    scanf("%d", &input);

    for (int i = 0; i <= 10; i++) 
    {
        output = input * i;
        printf("%d\n", output);
    }
    return(0);
}


