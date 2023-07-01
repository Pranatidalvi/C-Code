#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *names[6];
    char n[50];
    int len;
    char *p;
    int i;
    for ( i = 0; i <=5; i++)
    {
        printf("Enter name ");
        scanf("%s",n);
        len=strlen(n);
        p=(char *)malloc(len+1);
        strcpy(p,n);
        names[i]=p;
        /* code */
    }
    for ( i = 0; i < 5; i++)
    {

    printf("%s\t",names[i]);
    }
    return 0;
}