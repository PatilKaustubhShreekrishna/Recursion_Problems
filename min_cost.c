#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int min(int , int);
void get_cost(int* , int);
void show_cost(int* , int, const char*);
int min_cost(int* , int , int);


int main()
{
    int num, min_val;
    int* cost = NULL;
    puts("\nEnter Number of Stairs =");
    scanf("%d" , &num);

    cost = (int*)malloc(num * sizeof(int));

    get_cost(cost , num );

    show_cost(cost ,num , "\nCost For individual Stairs --->\n");

    min_val =min_cost(cost, 0 , num-1);

    printf("\nThe minimum cost needed to Climb the %d stairs is = %d\n",num , min_val);

    free(cost);

    cost = NULL;

    return 0;

}

int min(int a , int b)
{
    return a<b?a:b;
}

void get_cost(int* a, int n)
{
    int i;
    srand(time(0));

    for(i=0 ; i<n ;i++)
    {
        a[i] = (rand() % 1000); 
    }
}

void show_cost(int* a, int n , const char* msg)
{
    int i;
    puts(msg);
    for(i=0 ; i<n ;i++)
    {
        printf("%d  ", a[i]);
    }
}

int min_cost(int* cost , int cs, int ts)
{
    int one_jump,two_jump;
    if(cs == ts)
        return 0;
    if(cs>ts)
        return 100000;
    one_jump = cost[cs] + min_cost(cost , cs+1 , ts);

    two_jump = cost[cs] + min_cost(cost , cs+2 , ts);
    return min(one_jump,two_jump);
}