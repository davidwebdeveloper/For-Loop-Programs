// Write a program to display the cube of the number upto given an integer. 

#include<stdio.h>
int main() {
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("\nThe cube of %d is = %d",i,i*i*i);
    }
    return 0;
}