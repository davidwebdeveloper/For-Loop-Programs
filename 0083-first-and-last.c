// Write a program to find the first and last digit of a number.

#include<stdio.h>
int main() {
    int first,last,i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        first = i;
    }
    last = n % 10;
    printf("First = %d and last = %d",first,last);
    return 0;
}