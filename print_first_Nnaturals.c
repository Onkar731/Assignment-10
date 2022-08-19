/* Write a function to print first N natural numbers. (TSRN) */

#include<stdio.h>
void printNnatural(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printNnatural(num);
    return 0;
}

void printNnatural(int n)
{
    int i;
    for(i = 1; i <= n; i++)
        printf("%d ", i);
}