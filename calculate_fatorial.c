/* Write a function to calculate the factorial of a number. (TSRS) */

#include<stdio.h>
long fact(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Factorial = %d", fact(num));
    return 0;
}

long fact(int n)
{
    int i;
    long f = 1;
    
    for(i = 1; i <= n; i++)
        f *= i;
    
    return f;
}