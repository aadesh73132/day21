#include <stdio.h>
int main()
{
    int i,sum=0;

    for ( i = 1; i <=10; i++)
    {
        sum=sum+1;
        printf("%d\n",i);
    }
    printf("sum is %d\n",sum);
    return 0;
}
