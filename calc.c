#include<stdio.h>
int main()
{
    char operator;
    int a,b,sum,sub,mul,div,breck;
    
    printf("enter operator\n");
    scanf("%c",&operator);

    printf("engter two values\n");
    scanf("%d%d",&a,&b);

    switch(operator)
    {
        case'+' : sum=a+b;
        printf("sum=%d\n",sum);
        breck;

        case'-' : sub=a-b;
        printf("sub=%d\n",sub);
        breck;

        case'*' : mul=a*b;
        printf("mul=%d\n",mul);
        breck;

        case'/': div=a/b;
        printf("div=%d\n",div);
        breck;

        defalut:
        printf("enter valid oprator");

    }


    return 0;
}
