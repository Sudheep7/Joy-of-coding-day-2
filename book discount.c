#include <stdio.h>

int main()
{
    int rank;
    printf("enter the rank:");
    scanf("%d",&rank);
    
    if(rank<=3250)
    printf("all branches are possible");
    else if(rank>3250 && rank<=6505)
    printf("u ll get ISE,E&C,MEC");
    else if(rank>6505 && rank<=12012)
    printf("u ll get ECE,MEC");
    else if(rank>12012 && rank<=22340)
    printf("u ll get MEC");
    else
    printf("no branches available");
    return 0;
}

