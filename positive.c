
#include <stdio.h>

int main()
{
    int x;
    printf("enter your number");
    scanf("%d",&x);
    if (x>0)
    {
        printf("positive");
    }
    else if(x==0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
}
