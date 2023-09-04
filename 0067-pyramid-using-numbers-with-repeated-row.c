// Write a program to make such a pattern like a pyramid using number and a
// number will repeat for a row.

#include<stdio.h>
int main() {
    int i,j,n,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=1;j<n-i;j++) {
            printf(" ");
        }
        for(k=j;k<=n+i;k=k+2) {
            printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;
}