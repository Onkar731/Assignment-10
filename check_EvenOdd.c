/* Write a function to check whether a given number is even or odd.
   Return 1 if the number is even, otherwise return 0. (TSRS)
*/

#include<stdio.h>
int checkEvenOdd(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if(checkEvenOdd(num)){
        printf("%d is Even", num);
    }
    else{
        printf("%d is Odd", num);
    }

    return 0;
}

int checkEvenOdd(int n)
{
    if(n % 2)
        return 0;
    else
        return 1;
}