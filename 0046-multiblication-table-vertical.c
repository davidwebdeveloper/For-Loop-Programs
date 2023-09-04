// Write a program to display the multiplication table vertically from 1 to n. 
#include<stdio.h>
int main() {
    int n,i,j;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            printf("%d X %d = %d ",j,i,i*j);
        }
        printf("\n");
    }
}