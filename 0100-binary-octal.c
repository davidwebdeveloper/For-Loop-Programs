// Write a program to convert a binary number to octal number


#include<stdio.h>
int p(int,int);
int main() {
    int n,i,decimal=0,octal=0,temp,k=0,v=0,final=0,z=0;
    // printf("Enter the Binary number: ");
    // scanf("%d",&n);

    // Binary to Decimal

    printf("Enter the Binary number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        temp = i % 10;
        decimal = decimal + temp * p(2,k);
        k++;
    }
    
    // printf("decimal = %d",decimal);

    // Decimal to Octal
    for(i=decimal;i!=0;i=i/8) {
        temp = i%8;
        octal = octal + temp * p(10,z);
        z++;
    }
    printf("\nOctal number = %d",octal);
   
   
    
}
int p(int x, int e) {
    int i,result=1;
    for(i=0;i<e;i++) {
        result = result * x;
        // printf("\nresult = %d",result);
    }
    return result;
}