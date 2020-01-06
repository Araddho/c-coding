#include <stdio.h>
int main()
{
    int num1, num2,x,y,z,a,b;
    char op;
    printf("num1[+,-,*,/]num2\n");
    scanf("%d%c%d",&num1,&op,&num2);
    switch(op)
    {
    case '+' :
        x=num1+num2;
        printf("%d",x);
        break;
    case '-':
        y=num1-num2;
        printf("%d",y);
        break;
    case '*':
        z=num1*num2;
        printf("%d",z);
        break;
    case  '/':
        a=num1/num2;
        printf("%d\n",a);
         b=num1%num2;
        if(b!=0)
        {
            printf("%d remainder",b);
        }
        break;
        default:
        printf("Value not acceptable");

    }
    return 0;
}
