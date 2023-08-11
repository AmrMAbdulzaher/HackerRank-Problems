#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	
	// array to store the string, and another 10 elements array, initialized with 0 for frequency denoting
    char string[1000], freq[10]={0};
    scanf("%s",string);
	
	//loop checking every char in the string, if it's equal to a digit from 0 to 9, it inc it's counter
    for(int i=0; i<strlen(string); i++)
    {
        switch(string[i])
        {
            case '0':
                freq[0]++;
                break;
            case '1':
                freq[1]++; 
                break;
            case '2':
                freq[2]++; 
                break;
            case '3': 
                freq[3]++; 
                break;
            case '4': 
                freq[4]++; 
                break;
            case '5': 
                freq[5]++; 
                break;
            case '6': 
                freq[6]++; 
                break;
            case '7':
                freq[7]++; 
                break;
            case '8':
                freq[8]++; 
                break;
            case '9':
                freq[9]++; 
                break;
        }
    }
    
	//loop prints elements of frequency array
    for(int i=0; i<10; i++)
    {
        printf("%d ",freq[i]);
    }
      
    return 0;
}
