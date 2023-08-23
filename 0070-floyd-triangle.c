// Write a program to print the Floyd's Triangle.

#include<stdio.h>
int main() {
    int i,j,n,sum;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<i+1;j++) {
            sum =i + j;
            if(sum%2==0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}