// Write a program to find the Greatest Common Divisor (GCD) of two numbers. 

#include<stdio.h>
int main() {
    int a,b,min,i;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if(a>b)
        min =b;
    else 
        min = a;
    for(i=min;i>=1;i--) {
        if(a%i==0 && b%i==0)
            break;
    }
    printf("GCD = %d",i);
    return 0;
}