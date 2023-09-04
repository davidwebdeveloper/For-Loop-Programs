// ven two lists, find the common elements and store them in a new list.

#include<stdio.h>
#include<string.h>
int main() {
    int i,j,k=0,l;
    int a[]={6,3,4,2};
    int b[]={3,4,6,5};
    int c[4];
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            if(a[i]==b[j]) {
                c[k]=a[i];
                k++;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        printf("%d ",c[i]);
    }
        
    

}