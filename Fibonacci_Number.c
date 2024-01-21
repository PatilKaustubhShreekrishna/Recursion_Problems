#include<stdio.h>
int  fibonacci_num(int);
int main()
{
    int num , result;

    puts("\nEnter number of Elements in Fibonacci Series =");
    scanf("%d", &num);

    if(num<=0)
        printf("\nInvalid Number\n");
    else
        result = fibonacci_num(num);
        printf("\nThe %dth Fibonacci Number =%d" , num , result) ;

    return 0;
}

int  fibonacci_num(int n)
{
    int ans;
    if(n<0)
        return -1;
    else if(n==0)
        return 0;
    else if(n == 1)
        return 1;   
    else
    {
        return ( fibonacci_num(n-1) + fibonacci_num(n-2) ); 
    }  
}