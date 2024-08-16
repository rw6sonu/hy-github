#include<stdio.h>
int main()
{
    int X,Y,Z;
    printf("enter X= ");
    scanf("%d",&X);
    printf("enter Y= ");
    scanf("%d",&Y);
    printf("enter Z= ");
    scanf("%d",&Z);

    if(X>=Y)
    {
        if(X>=Z)
        {
            printf("X is max");
        }
        else
        {
            printf("Z is max");
        } 
    }
    else
    {
        if(Y>=Z)
        {
            printf("Y is max");
        }
        else
        {
            printf("Z is max");
        }
    }
}