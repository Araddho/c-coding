#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    switch(x>y)
    {
    case 0:
        printf("%d is greater then %d\n",y,x);
        break;
    case 1:
        printf("%d is greater then %d\n",x,y);
        break;
    }
    return 0;
}
