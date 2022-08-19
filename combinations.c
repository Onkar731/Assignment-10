/* Write a function to calculate the number of combinations one can make from n items and r selected at a time (TSRS) */

#include<stdio.h>

long fact(int);
long combination(int, int);

int main(){

    int n, r;

    printf("Enter total number items : ");
    scanf("%d", &n);

    printf("\nEnter number of items to be select : ");
    scanf("%d", &r);

    printf("Combination = %ld",combination(n, r));

    return 0;
}

long fact(int n)
{
    long f = 1;

    for(int i = 1; i <= n; i++)
        f *= i;
    
    return f;
}

long combination(int n, int r)
{
    return( fact(n)/(fact(n-r) * fact(r)) );
}
