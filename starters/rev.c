#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Hello: ");
    gets(str);
    for (int i = 0; i < strlen(str)+1; i++)
    {
        if (str[i] == ' '||str[i] =='\0')
        {
            for (int j = i-1; str[j]!=' '&&j>-1; j--)
            {
                printf("%c", str[j]);
            }
            printf(" ");
        }
        
    }
    
}