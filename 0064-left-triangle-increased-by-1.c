// Write a program to make such a pattern like right angle triangle with number
// increased by 1.

#include<stdio.h>
int main() {
    int n,i,j,temp=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            temp++;
            printf("%d ",temp);
        }
        printf("\n");
    }
    return 0;

}