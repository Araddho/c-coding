#include <stdio.h>
int main()
{
    int arr[2][2],arr2[2][2],x,y,z;
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            scanf("%d",&arr[x][y]);
        }
    }
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            scanf("%d",&arr2[x][y]);
        }
    }
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            z=arr[x][y]+arr2[x][y];
            printf("%d ",z);

        }
        printf("\n");

    }
    return 0;

}
