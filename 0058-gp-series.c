// Write a program to find the Sum of GP series.
#include<stdio.h>
int main() {
    int a,n,i,r,sum=0,p; 
    printf("Enter the starting number: ");
    scanf("%d",&a);
    printf("number of items: ");
    scanf("%d",&n);
    printf("Enter the ratio: ");
    scanf("%d",&r);
    for(i=n;i>0;i--) {
        sum = sum + a;
        a = a * r;
    }
    printf("Sum = %d",sum);
    
}


