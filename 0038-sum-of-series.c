// Write a program to calculate the sum of the series (1*1) + (2*2) + (3*3) +
// (4*4) + (5*5) + ... + (n*n). 

#include<stdio.h>
int main() {
    int n,sum=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
        sum = sum + i*i;
    printf("Sum = %d",sum);
    return 0;
}