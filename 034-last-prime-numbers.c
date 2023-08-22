// Write a program to find the last prime number occur before the entered
// number. 

#include<stdio.h>
int main() {
    int n,i,j,count;
    printf("Enter the limit value: ");
    scanf("%d",&n);
    for(i=n;i>0;i--) {
        count = 0;
        for(j=1;j<=n/2;j++) {
            if(i%j==0) {
                count++;
            }
        }
        if(count<=1) {
            printf("%d",i);
            break;
        }
    }
}