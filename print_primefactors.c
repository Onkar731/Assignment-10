/* Write a function to print all prime factors of a given number.
   For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/

#include<stdio.h>
void printPrimeFactors(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printPrimeFactors(num);
    return 0;
}

void printPrimeFactors(int n)
{
    int i, j;

    for(i = 2; i <= n; i++){
        if(n % i == 0){

            for(j = 2; j < i; j++){
                if(i % j == 0){
                    break;
                }
            }
            if(i == j){
                printf("%d %d ", i,i);
            }
        }
    }
}