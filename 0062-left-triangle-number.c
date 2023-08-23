// Write a program to display the pattern like right angle triangle with number.

#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            printf("%d",j);
            
        }
        printf("\n");
    }
}