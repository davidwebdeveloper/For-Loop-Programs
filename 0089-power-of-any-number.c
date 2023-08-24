//Write a program to find power of any number using for loop.
#include<stdio.h>
int main() {
    int b,e,power=1,i;
    printf("Enter the base value: ");
    scanf("%d",&b);
    printf("Enter the exponent value: ");
    scanf("%d",&e);
    for(i=1;i<=e;i++) {
        power = power * b;
    }
    printf("%d^%d = %d",b,e,power);
    return 0;

}