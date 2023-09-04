// Write a program to calculate product of digits of any number.

#include<stdio.h>
int main() {
    int mul=1,n,temp,i;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        temp = i%10;
        mul = mul * temp;
    }
    printf("The product of digit of %d is = %d",n,mul);
}