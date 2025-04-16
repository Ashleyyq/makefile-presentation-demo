#include <stdio.h>
#include "math_utils.h"
#include "string_utils.h"

int main() {
    int a = 10, b = 5;
    char str1[50] = "Hello, ";
    char str2[] = "Makefile!";
    char result[100];
    
    printf("Math Operations:\n");
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, subtract(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    printf("%d / %d = %d\n", a, b, divide(a, b));
    
    printf("\nString Operations:\n");
    string_concat(str1, str2, result);
    printf("Concatenated: %s\n", result);
    
    to_uppercase(result);
    printf("Uppercase: %s\n", result);
    
    to_lowercase(result);
    printf("Lowercase: %s\n", result);
    
#ifdef DEBUG
    printf("\nRunning in DEBUG mode!\n");
#else
    printf("\nRunning in RELEASE mode!\n");
#endif
    
    printf("Makefile demonstration successful!\n");
    return 0;
}

