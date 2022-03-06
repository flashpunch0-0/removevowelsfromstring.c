#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,len;
    
    printf("\nenter string");
    scanf("%[^\n]s",s);
    len=strlen(s);
    printf("%d",len);
    for (i=0;i<len;i++)
    {
        if(s[i] =='a'|| s[i] =='A' || s[i] == 'e' || s[i] =='E'
        || s[i] =='i' || s[i] =='I' || s[i] == 'o' || s[i] == 'O'
         || s[i] =='u'|| s[i] =='U')
         {
             for(j=i;j<len;j++)
             {
                s[j]=s[j+1];
             }
             len--;
         }
    }
printf("\n after removal : %s",s);
    return 0;
}
