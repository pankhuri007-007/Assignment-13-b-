#include <stdio.h>
#include <string.h>

int findLength(char str[]) {
    return strlen(str);
}

void copyString(char str1[], char str2[]) {
    strcpy(str2, str1);
}

int compareString(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

int main() {
    char str1[100], str2[100], copy[100];

    int (*lengthPtr)(char[]);
    void (*copyPtr)(char[], char[]);
    int (*comparePtr)(char[], char[]);

    lengthPtr = findLength;
    copyPtr = copyString;
    comparePtr = compareString;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("\nLength of first string = %d\n", lengthPtr(str1));

    copyPtr(str1, copy);
    printf("Copied string = %s\n", copy);

    if (comparePtr(str1, str2) == 0)
        printf("Both strings are equal\n");
    else
        printf("Both strings are not equal\n");

    return 0;
}