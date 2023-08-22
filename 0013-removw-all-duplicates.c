// Remove all duplicates from a list.

#include<stdio.h>

int isFound(char str,char a[]) {
    int found,i;
    found = 0;
    for(i=0;i<strlen(a);i++)
    {
        if(str==a[i]) {
            found = 1;
            break;
        return found;

        }
    }
}

int main() {
    int i,k=0,j;
    char str[] = "david";
    char a[5]="";
    for(i=0;str[i]!='\0';i++)
    {
        if(isFound(str[i],a))
        {
            a[k] = str[i];
            k++;
        }
    }
    for(j=0;j<strlen(a);j++)
    {
        printf("%c",a[j]);
    }
}

