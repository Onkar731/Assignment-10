/* Write a function to calculate simple interest. (TSRS) */

#include<stdio.h>
float simple_interest(float, float, int);

int main(){

    int time;
    float amt, roi;

    printf("Enter amount, rate of interest and time : ");
    scanf("%f%f%d", &amt, &roi, &time);

    printf("Simple Interest is %.2f", simple_interest(amt, roi, time));
    return 0;
}

float simple_interest(float amt, float roi, int time)
{
    float A = amt*(1 + roi/100*time);
    return (A - amt);
}