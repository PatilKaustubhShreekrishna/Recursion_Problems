#include<stdio.h>
int ways_to_climb(int , int , int );
int main()
{
    int cs, ts,num,total_ways;

    printf("\nenter the number of Stairs =");
    scanf("%d",&num);

    total_ways = ways_to_climb(num , 0 , num);

    printf("\nNumber of ways to climb %d stairs = %d", num , total_ways);

    return 0;
}

int ways_to_climb(int n , int cs , int ts)
{
    int one_jump , two_jump , count=0 ;

    if(cs > ts)
        return 0;
    
    if(cs == ts)
        return 1;
    
    count = count + ways_to_climb(n , cs+1 , ts); // one_jump
    count = count + ways_to_climb(n , cs+2 , ts);// two_jump;

    return count ;
}