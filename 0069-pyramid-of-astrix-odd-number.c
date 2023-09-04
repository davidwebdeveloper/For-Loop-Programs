// Write a program to display the pattern like a pyramid using asterisk and
// each row contain an odd number of asterisks.

#include<stdio.h>
int main() {
    int i,j,n,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=1;j<=2*n-1;j++) {
            if(j>=n-i && j<=n+i)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
        
    }
    return 0;
}