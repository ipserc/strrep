/*
 * strrep.c
 *
 *  Created on: 12 ene. 2020
 *      Author: ipserc
 */

#include "strrep.h"

/** appendstr (Append String). Appends the string 'append' to the string 'string'.
 * @param string The string in which append the new text.
 * @param append The new strint to append.
 * @return returns a new string with the appended text.
 */
char * appendstr(char * string, const char * append) {
	char * newString = malloc(strlen(string) + strlen(append) + 1);

	sprintf(newString, "%s%s", string, append);
	free(string);
	return newString;
}

/**
 * strtokk (String Tokenizer). Breaks string 'string' into a series of tokens using 'strf' as a WHOLE DELIMITER string.
 * It works in the same way of strtok, so the 'string' passed as parameter is split in the different parts.
 * @param string The contents of this string are modified and broken into smaller strings (tokens).
 * @param strf This is the C string containing the DELIMITER.
 * @return Returns a pointer to the first token found in the string. A null pointer is returned if there are no tokens left to retrieve.
 */
char * strtokk(char * string, const char * strf) {
	static char * ptr;
	static char * ptr2;

	if (string) ptr = string;
	else {
		if (!ptr2) return ptr2;
		ptr = ptr2 + strlen(strf);
	}

	if (ptr) {
		ptr2 = strstr(ptr, strf);
		if (ptr2) memset(ptr2, 0, (size_t)strlen(strf));
	}
	return ptr;
}

/**
 * strrrep (String Replace). Replaces 'strf' with 'strr' in 'cadena' and returns the new string.
 * You need to free the returned string in your code after using strrep.
 * @param cadena The string with the text.
 * @param strf The text to find.
 * @param strr The replacement text.
 * @return The text updated wit the replacement.
 */
char * strrep(const char * cadena, const char * strf, const char * strr) {
	char * string;
	char * ptr;
	char * strrep;

	string = (char *)malloc(strlen(cadena));
	sprintf(string, "%s", cadena);
	ptr = strtokk(string, strf);
	strrep = malloc(strlen(ptr));
	memset(strrep, 0, strlen(ptr));
	while (ptr) {
		strrep = appendstr(strrep, ptr);
		ptr = strtokk(NULL, strf);
		if (ptr) strrep = appendstr(strrep, strr);
	}
	free(string);
	return strrep;
}

