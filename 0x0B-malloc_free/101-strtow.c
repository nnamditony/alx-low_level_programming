#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * strtow - Splits a string into words.
 * @str: The string to be splited.
 *
 * Return: Returns a pointer or a NULL.
 */

char **strtow(char *str) 
{
	if (str == NULL || strcmp(str, "") == 0) 
	{
		return NULL;
	}

	int word_count = 0;
	char *temp_str = str;
	char *word = strtok(temp_str, " ");
    while (word != NULL) {
        word_count++;
        word = strtok(NULL, " ");
    }

    // Allocate memory for the array of strings
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    // Split the string into words
    temp_str = str;
    word = strtok(temp_str, " ");
    int i = 0;
    while (word != NULL) {
        words[i] = (char *)malloc((strlen(word) + 1) * sizeof(char));
        if (words[i] == NULL) {
            // Free memory allocated so far
            for (int j = 0; j < i; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
        strcpy(words[i], word);
        i++;
        word = strtok(NULL, " ");
    }

    words[i] = NULL;  // Set the last element to NULL

    return words;
}
