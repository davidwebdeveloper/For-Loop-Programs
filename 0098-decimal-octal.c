// Write a program to convert a decimal number to Octal number.

#include<stdio.h>
int p(int,int);
int main() {
    int i,n,temp,total=0,k=0;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/8) {
        temp = i%8;
        total = total + temp * p(10,k);
        k++;
    }
    printf("Octal number = %d",total);
}

int p(int x, int e) {
    int i,result=1;
    for(i=0;i<e;i++) {
        result = result * x;
        // printf("\nresult = %d",result);
    }
    return result;
}
