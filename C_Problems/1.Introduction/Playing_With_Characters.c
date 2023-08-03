#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch,str[30], sen[100];
    
    scanf("%c",&ch);
	
	//scan until space is entered
	// so the whole word will be stored in str variable as string
    scanf("%s",str);
	
	//[^_] scan until \n"newline" is entered ,while %*c .. discard the \n
	// so the whole sentence will be stored in sen variable as string
    scanf(" %[^\n]%*c",sen);
	
    printf("%c\n%s\n%s",ch,str,sen);
       
    return 0;
}