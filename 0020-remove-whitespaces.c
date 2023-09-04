// Remove all white spaces from a string.
#include<stdio.h>
#include<string.h>
int main() {
    int i,k,j;
    char str[50];
    char a[100];
    gets(str);
    k=0;
    for(i=0;i<strlen(str);i++) {
               if(str[i]==' ')
            continue;
        a[k]=str[i];
        k++;
    }
    for(i=0;i<strlen(a);i++)
    {
        printf("%c",a[i]);
    }

}