// Write a program to find the sum of digits of a given number. 
#include<stdio.h>
int main() {
    int n,temp,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(;n!=0;) {
        temp = n%10;
        n = n/10;
        sum = sum + temp;
    }
    printf("Sum = %d",sum);
    return 0;
}