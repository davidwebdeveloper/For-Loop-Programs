// . Write a program to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) +
// ... + (1+2+3+4+...+n). 

#include<stdio.h>
int main() {
    int n,i,sum,j,total=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=n;i>0;i--) {
        sum =0;
        for(j=1;j<=i;j++) {
            sum =sum+j;
        }
        total = total + sum;
    }
    printf("Total is = %d",total);
    return 0;
}