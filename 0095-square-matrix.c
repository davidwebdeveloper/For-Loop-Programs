// Write a program to produce a square matrix with 0's down the main
// diagonal, 1's in the entries just above and below the main diagonal, 2's above
// and below that, etc.

#include<stdio.h>
int main() {
    int n,i,j;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==j) {
                printf("0 ");
            }
            else if(i<j) {
                printf("%d ",j-i);
            }
            else {
                printf("%d ",i-j);
            }
        }
        printf("\n");
    }

}