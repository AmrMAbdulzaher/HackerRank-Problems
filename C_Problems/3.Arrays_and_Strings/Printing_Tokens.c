#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char s[1000];
    scanf("%[^\n]%*c", s);
    //loop reprints the sentences but replaces space with newline
    for(int i=0; i<strlen(s); i++)
    {
        switch(s[i])
        {
            case ' ': printf("\n"); break;
            default: printf("%c",s[i]);
        }
    }
    return 0;
}
