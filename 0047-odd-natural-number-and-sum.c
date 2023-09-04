// Write a program to display the n terms of odd natural number and their sum. 

#include<stdio.h>
int main() {
    int n,sum=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        if(i%2!=0) {
            sum = sum + i;
            printf("%d ",i);
        }
    }
    printf("sum is = %d",sum);
}