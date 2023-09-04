// Write a program to display such a pattern for n number of rows using
// number. Each row will contain odd numbers of number. The first and last number
// of each row will be 1 and middle column will be the row number. n numbers of
// columns will appear in 1st row.

// 1 2 3 4 5 6 7 6 5 4 3 2 1 
//  1 2 3 4 5 6 5 4 3 2 1 
//   1 2 3 4 5 4 3 2 1 
//    1 2 3 4 3 2 1 
//     1 2 3 2 1 
//      1 2 1 
//       1 

#include<stdio.h>
int main() {
    int i,j,k,n,count;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;i-j>0;j++) {
            printf(" ");
        }
        count = 0;
        for(k=j;k<=2*n-i;k++) {
            if(k<=n) {
                count++;
                printf("%d",count);
                printf(" ");
               
            }
            else {
                count--;
                printf("%d",count);
                printf(" ");
            }
        }
        printf("\n");
    }
}