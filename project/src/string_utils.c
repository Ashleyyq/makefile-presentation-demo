#include "string_utils.h"
#include <ctype.h>
#include <string.h>

void string_concat(const char* str1, const char* str2, char* result) {
    strcpy(result, str1);
    strcat(result, str2);
}

void to_uppercase(char* str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void to_lowercase(char* str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

