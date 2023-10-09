#include<stdio.h>
int main()
{
    char ch;
    int lc,uc;
    printf("Enter a Character:\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='z')
        printf("The character entered is in uppercase");
    else
        printf("The character entered is in lowercase");
}
