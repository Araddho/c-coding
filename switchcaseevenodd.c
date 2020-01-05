#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    switch(x%2)
    {
    case 0:
        printf("the number is even");
        break;
    case 1:
        printf("the number is odd ");
        break;
    }
    return 0;
}
