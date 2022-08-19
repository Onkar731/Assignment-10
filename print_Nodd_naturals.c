/* Write a function to print first N odd natural numbers. (TSRN) */

#include<stdio.h>
void printNodd(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printNodd(num);
    return 0;
}

void printNodd(int n)
{
    int i;
    for(i = 1; i <= n; i++)
        printf("%d ", i*2-1);
}