#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        char s[100];
        scanf("%s",s);
        unsigned int n = strlen(s);
        if(n > 10){
            printf("%c%d%c\n",s[0],n-2,s[n-1]);
        }
        else{
            printf("%s\n",s);
        }
        
    }
    return 0;
}
