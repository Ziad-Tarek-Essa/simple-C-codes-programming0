#include <stdio.h>
int main()
{
    char c;
    printf("Enter u to display characters in uppercase and l to display in lowercase: ");
    scanf("%c",&c);
    if(c=='U' || c=='u')
    {
       for(c='A'; c<='Z'; ++c)
         printf("%c ",c);
    }
    if (c=='L' || c=='l')
    {
        for(c='a'; c<='z'; ++c)
         printf("%c ",c);
    }
    if (c!='U' || c!='L' || c=='u' || c=='l')
         printf("Error !!!");
    return 0;
}
