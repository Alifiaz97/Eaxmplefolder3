#include <stdio.h>

int addNumbers(int a, int b, int c, int d, int e);         // function prototype

int main()
{
    int n1,n2, n3, n4, n5, sum;

    printf("Enters two numbers: ");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    sum = addNumbers(n1, n2, n3, n4, n5);        // function call

    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a,int b, int c, int d, int e)         // function definition   
{
    int result;
    result = a+b+c+d+e;
    return result;                  // return statement
}


// the program above implements the addition method in order to calculate the result of two numbers. 


//This is the line causing issue in the conflict branch




// >>>>>>> testing
