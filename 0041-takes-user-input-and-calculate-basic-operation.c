// Write a program to asked user to input positive integers to process count,
// maximum, minimum, and average or terminate the process with -1. 
#include<stdio.h>
int main() {
    int i,j,count=0,max,min,sum=0;
    int a[] = {5,3,2,5,6};
    min=a[0];
    max=a[0];
    int size = sizeof(a) / sizeof(a[0]);
    for(i=0;i<size;i++) {
        if(a[i]>0) 
            count++;
    }
    for(i=1;i<size;i++) {
        max = a[0];
        if(a[i]>max) 
            max = a[i];
    }
    for(i=1;i<size;i++) {
        
        if(a[i]<min)
            min = a[i];
    }
    for(i=0;i<size;i++) {
        sum = sum + a[i];
    }
    printf("\nThe number of possitive integer is = %d",count);
    printf("\nThe maximum value is = %d",max);
    printf("\nThe minimum value is = %d",min);
    printf("\nThe average is = %.2f",(float)sum/size);

}