/*
*********************************************************************************************************
* @file				: solution.c
* @author			: Amr Mohamed Abdulzaher (amrnassareng@gmail.com)
* @brief			: contains a solution of [Vowel-Substring] Challenge PS (Basic) Certificate Test 
*********************************************************************************************************
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
int parse_int(char*);

char* findSubstring(char* s, int k)
{
    char vowelLetters[] = "aouei";
    int maxCount = 0;
    int currentCount = 0;
    int startIndex = 0;
    char currentString[k+1];
    char maxString[k+1];
	
    //iterate through all possible substrings of length k
    for (int index = k; index <= strlen(s); index++)
	{
		//copy the current substring in currentString
        strncpy(currentString, s + startIndex, k);
        currentString[k] = '\0';
        //count number of vowels in current substring
        for (int i = 0; i < k; i++)
		{
            for (int j = 0; j < sizeof(vowelLetters) - 1; j++)
			{
                if (currentString[i] == vowelLetters[j])
				{
                    currentCount++;
                    break;
                }
            }
        }
        //update maxCount and maxString if a higher count is found
        if (currentCount > maxCount)
		{
            maxCount = currentCount;
            strncpy(maxString, currentString,k);
			maxString[k]='\0';
        }
        //reset currentCount for next substring
        currentCount = 0;
		//move to the next substring
        startIndex++;
    }

     return maxCount > 0 ? strdup(maxString):"Not found!";
}



int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    int k = parse_int(ltrim(rtrim(readline())));

    char* result = findSubstring(s, k);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}