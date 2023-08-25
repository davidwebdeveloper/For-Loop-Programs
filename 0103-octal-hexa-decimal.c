// Write a program to convert a octal number to a hexadecimal number.

#include<stdio.h>
int p(int,int);
int main() {
    int n,i,decimal=0,temp,s=0,k=0;
    char a[100];
    printf("Enter the octal number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        temp = i % 10;
        decimal = decimal + temp * p(8,s);
        s++;
    }
    // printf("Decimal Number: %d",decimal);

    // Decimal to Hexa decimal

    
    
    for(i=decimal;i!=0;i=i/16) {
        temp = i%16;
        if(temp<10) {
            a[k]=48+temp;
        }
        else {
            a[k]=55+temp;
        }
        k++;
    }
    printf("\nHexa Decimal: ");
    for(i=k;i>=0;i--) {
         printf("%c",a[i]);
    }
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