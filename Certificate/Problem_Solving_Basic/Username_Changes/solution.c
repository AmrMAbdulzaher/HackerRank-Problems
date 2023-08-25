/*
*********************************************************************************************************
* @file				: solution.c
* @author			: Amr Mohamed Abdulzaher (amrnassareng@gmail.com)
* @brief			: contains a solution of [Usernames-Changes] Challenge PS (Basic) Certificate Test 
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

char** possibleChanges(int usernames_count, char** usernames, int* result_count)
{
	//allocate memory to store result for each username
    char** result = malloc(usernames_count * sizeof(char*));
	
	//Set the result count to the number of usernames
	*result_count = usernames_count;

    for (int i = 0; i < usernames_count; i++)
	{
		//check if username length 1 or less => this username is unchangeable
        if (strlen(usernames[i]) <= 1)
		{
            result[i] = "NO";
        }
		
		//iterate through characters in current username
        for (int j = 0; j < strlen(usernames[i]) - 1; j++)
		{
			//compare ASCII Values of current character with next character
            if (usernames[i][j] > usernames[i][j + 1])
			{
                result[i] = "YES";
                break;
            }
			else
			{
                result[i] = "NO";
            }
        }
    }
	
    return result;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int usernames_count = parse_int(ltrim(rtrim(readline())));

    char** usernames = malloc(usernames_count * sizeof(char*));

    for (int i = 0; i < usernames_count; i++) {
        char* usernames_item = readline();

        *(usernames + i) = usernames_item;
    }

    int result_count;
    char** result = possibleChanges(usernames_count, usernames, &result_count);

    for (int i = 0; i < result_count; i++) {
        fprintf(fptr, "%s", *(result + i));

        if (i != result_count - 1) {
            fprintf(fptr, "\n");
        }
    }

    fprintf(fptr, "\n");

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