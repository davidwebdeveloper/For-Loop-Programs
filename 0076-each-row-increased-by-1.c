// Write a program to print a pyramid of digits as shown below for n number of
// lines.

//     1     
//    2 3 2    
//   3 4 5 4 3   
//  4 5 6 7 6 5 4  
// 5 6 7 8 9 8 7 6 5 

#include<stdio.h>
int main() {
    int i,n,j,count;
    printf("Enter the rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        count = i;
        for(j=1;j<=2*n-1;j++) {
            if(j>=n-i && j<=n+i) {
                if(j<=n)
                    count++;
                else
                    count--;
                printf("%d ",count);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}