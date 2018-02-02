#include <stdio.h>

int multiplyNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = multiplyNumbers(n1, n2);        // function call

    printf("sum = %d",sum);

    return 0;
}

int multiplyNumbers(int a,int b)         // function definition   
{
    int result;
    result = a*b;
    return result;                  // return statement
}
