// Write a program to make such a pattern like a pyramid with numbers
// increased by 1.

#include<stdio.h>
int main() {
    int i,j,n,k,count=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=1;j<n-i;j++) {
            printf(" ");
        }
        for(k=j;k<=n+i;k=k+2) {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}