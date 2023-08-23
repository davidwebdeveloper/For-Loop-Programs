// Write a program to display the pattern like right angle triangle with right
// justified using digits.

//     1 
//    2 1 
//   3 2 1 
//  4 3 2 1 
// 5 4 3 2 1 

#include<stdio.h>
int main() {
    int i,j,n,k,count;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        count = i+1;
        for(j=1;j<n-i;j++) {
            printf(" ");
        }
        for(k=j;k<=n+i;k=k+2) {
            printf("%d ",count);
            count--;
        }
        printf("\n");
    }
    return 0;
}