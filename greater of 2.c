#include <stdio.h>

int main()
{
    int a,b,c,l;
    printf("Enter three number:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>=0&&b>=0&&c>=0)
    {
        l=(a>b)?(a>c?a:c):(b>c?b:c);
        printf("The largest is:%d\n",l);
    }
    else
    printf("Invalid number");
    return 0;
}

