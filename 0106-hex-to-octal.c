// Write a program to convert a hexadecimal number to octal number.

// Write a program to convert hexadecimal number to binary number.

#include<stdio.h>
#include<string.h>
int p(int,int);
int main() {
    int n,i,decimal=0,k=0,len,temp,z=0,octal=0;
    char str[30];
    printf("Enter the hexa decimal number: ");
    scanf("%s",str);
    len = strlen(str);
    // printf("first = %c",str[0]);
    // printf("last = %c",str[len-1]);
    
    for(i=len-1;i>=0;i--) {
        if(str[i]>=65 && str[i]<=70) {
            str[i] = str[i]-55;
        }
        else if(str[i]>=97 && str[i]<=122) {
            str[i]=str[i]-87;
        }
        else {
            str[i]=str[i]-48;
        }
        decimal = decimal + str[i] * p(16,k);
        k++;
    }
    // printf("\ndecimal = %d",decimal);

    // decimal to binary
    
    for(i=decimal;i!=0;i=i/8) {
        temp = i%8;
        octal = octal + temp * p(10,z);
        z++;
    }
    printf("\nOctal = %d",octal);
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