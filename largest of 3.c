#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d\n%d",&a,&b);
    if(a>=0&&b>=0)
    {
        if(a>b)
        printf("%d is greater",a);
        else
        printf("%d is greater",b);
        return 0;
    }
    else
    printf("Invalid number");
    return 0
}

