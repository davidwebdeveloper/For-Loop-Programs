// Remove all occurrences of a specific element from a list.


#include<stdio.h>
#include<string.h>
int main() {
    char a[] = "davidaaa";
    char b[50];
    int k=0,i;
    char find;
    printf("Enter your character to find : ");
    scanf("%c",&find);
    for(i=0;i<strlen(a);i++) {
        if(a[i]==find)
            continue;
        b[k]=a[i];
        k++;
    }
    for(i=0;i<k;i++) {
          printf("%c",b[i]);
    }
  
}