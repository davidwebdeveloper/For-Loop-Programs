// . Write a program to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. 

#include<stdio.h>
int main() {
    int n,i,j,temp;
    float sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>0;i--) {
        temp = 1;
        for(j=i;j>0;j--) {
            temp = temp*i;
        }
        sum = sum + (float) 1/temp;
    }
    printf("Sum is = %.2f",sum);
}