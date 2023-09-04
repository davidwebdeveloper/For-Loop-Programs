// Write a program to make such a pattern like right angle triangle using
// number which will repeat the number for that row.

#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            printf("%d",i);
        }
        printf("\n");
    }
}