#include <stdio.h>
int main()
{
    int x,y,mult;
    printf("enter your digit.");
    scanf("%d",&x);
    for(y=0;y<=20;y++)
    {
        mult=x*y;
       printf("%d*%d= %d\n",x,y,mult);
    }
    return 0;
}
