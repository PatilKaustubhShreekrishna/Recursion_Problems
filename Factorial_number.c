#include<stdio.h>

int factorial(int);

int main()
{
    int num, result;
    printf("Enter number =");
    scanf("%d" , &num);
    
    result=factorial(num);

    if(result > 0)
        printf("\nThe Factorial Of %d is = %d\n", num ,result);
    if(result == -1)
    
        puts("\nInvalid Value for finding Factorial\n");
    
    
    return 0;
}

int factorial(int num)
{
    if(num == 0)
        return 1;
    else if(num >0)
        return (num * factorial(num-1));
    else
        return -1;
}
