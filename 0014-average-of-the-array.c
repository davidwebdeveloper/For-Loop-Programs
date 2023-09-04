// Calculate the average of numbers in an array.

#include<stdio.h>
#include<string.h>
int main() {
    char a[] = {10,12,20,24};
    int sum=0,i;
        float avg;
    for(i=0;i<strlen(a);i++)
        sum = sum + a[i];
    avg = (float)sum / strlen(a);
    printf("The Average is %.2f",avg);
    return 0;

}