// Write a program to find the number and sum of all integer between 100 and
// // 200 which are divisible by 9.

#include<stdio.h>
int main() {
    int sum=0,i;
    for(i=101;i<=200;i++) {
        if(i%9==0) {
            sum = sum + i;
            printf("%d ",i);
        }
    }
    printf("sum = %d",sum);
}