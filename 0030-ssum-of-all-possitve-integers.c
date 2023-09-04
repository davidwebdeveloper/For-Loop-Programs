// 9. Create a program using a for loop to find the sum of all positive integers less than 1000 that are
// // multiples of 3 or 5.

#include<stdio.h>
int main() {
    int sum =0;
    int i;
    for(i=1;i<=1000;i++) {
        if(i%3==0 || i%5==0) {
            sum = sum +i;
        }
    }
    printf("Sum is = %d",sum);
    return 0;
}