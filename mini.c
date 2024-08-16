#include<stdio.h>
int main()
{
    int A,B,C;
    printf("enter A= ");
    scanf("%d",&A);
    printf("enter B= ");
    scanf("%d",&B);
    printf("enter C= ");
    scanf("%d",&C);

    if(A<=B)
    {
        if(A<=C)
        {
            printf("A is Min");
        }
        else
        {
            printf("C is min");
        }
    }
    else
    {
        if(B<=C)
        {
            printf("B is min");
        }
        else
        {
            printf("C is min");
        }
    }
}