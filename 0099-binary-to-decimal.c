// Write a program to convert a binary number to decimal number.


#include<stdio.h>
int p(int,int);
int main() {
    int n,i,total=0,temp,k=0;
    printf("Enter the Binary number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        temp = i % 10;
        total = total + temp * p(2,k);
        k++;
    }
    printf("Decimal Number: %d",total);
    return 0;
}
int p(int x, int e) {
    int i,result=1;
    for(i=0;i<e;i++) {
        result = result * x;
        // printf("\nresult = %d",result);
    }
    return result;
}