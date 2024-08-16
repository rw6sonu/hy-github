#include<stdio.h>

int main()
{
    int num;

    printf("enter num= ");
    scanf("%d",&num);
    
    if(num>0)
    { 
        printf("+ve");  

    } 
    else if(num<0)
    {
        printf("-ve");
    }
    else 
    {
        printf("Zero");
    }
        
       return 0;
  



}