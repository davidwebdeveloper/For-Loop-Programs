// Write a program to convert a hexadecimal number to decimal number.

#include<stdio.h>
#include<string.h>
int p(int,int);
int main() {
    int n,i,total=0,k=0,len;
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
        total = total + str[i] * p(16,k);
        k++;
    }
    printf("decimal = %d",total);
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