// Write a program to display such a pattern for n number of rows using
// number. Each row will contain odd numbers of number. The first and last number
// of each row will be 1 and middle column will be the row number.

//     1    
//    121   
//   12321  
//  1234321 
// 123454321

#include<stdio.h>
int main() {
    int i,n,j,count;
    printf("Enter the rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        count = 0;
        for(j=1;j<=2*n-1;j++) {
            if(j>=n-i && j<=n+i) {
                if(j<=n)
                    count++;
                else
                    count--;
                printf("%d",count);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}