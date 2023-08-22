// Calculate the product of all elements in an array.

#include<stdio.h>
int main() {
    int a[] = {4,6,7,9,3};
    int result=1,i;
    int size = sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++) {

        result = result * a[i];

    }
    printf("Product is = %d",result);

    return 0;
}