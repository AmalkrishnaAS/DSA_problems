#include<stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[100];
    bool flag=false;
    int n;
    
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
    gets(str);
    for(int i=0;str[i]!=0;i++)
    {
        str[i]=tolower(str[i]);
    }
    char *token;
    token=strtok(str," ");
    while(token)
    {
        flag=false;
            //do processing
            int j=0;
            while(!isalpha(token[j]))
            {
                token[j]==' ';
                j++;
            }
            
            token[j]=toupper(token[j]);
            for(int i=0;token[i]!=0;i++)
            {
                if(!isalpha(token[i])) continue;

            printf("%c",token[i]);
            flag=true;      //flag is for an edge case where all the characters in the word are not alphanumeric so that ajacent spaces wont get printed

            }
            if(flag)
            printf(" ");
        token=strtok(NULL," ");
    }
    printf("\n");
    }
return 0;
}
