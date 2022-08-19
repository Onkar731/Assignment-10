/* Write a function to check whether a given number contains a given digit or not. (TSRS) */

#include<stdio.h>
int checkPresenceDigit(int,int);

int main(){

    int num, digit;

    printf("Enter a number : ");
    scanf("%d%d", &num, &digit);

    if(checkPresenceDigit(num, digit))
        printf("%d is present in %d", digit, num);
    else
        printf("%d is not present in %d", digit, num);
    
    return 0;
}

int checkPresenceDigit(int num, int digit)
{
    while(num){
        if(num%10 == digit)
            return 1;
        num /= 10;
    }

    return 0;
}