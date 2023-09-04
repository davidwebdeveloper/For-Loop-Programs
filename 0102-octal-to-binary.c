// Write a program to convert a octal number to binary number.

#include<stdio.h>
int p(int,int);
int main() {
    int n,i,decimal=0,binary=0,temp,k=0,z=0;
    printf("Enter the Octal number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        temp = i % 10;
        decimal = decimal + temp * p(8,k);
        k++;
    }
    printf("Decimal Number: %d",decimal);

    for(i=decimal;i!=0;i=i/2) {
        temp = i%2;
        binary = binary + temp * p(10,z);
        z++;
    }
    // printf("\nBinary number = %d",binary);
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