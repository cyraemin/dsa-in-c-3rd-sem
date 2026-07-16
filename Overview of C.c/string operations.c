//1.	Implement the string operations of strcat, strcmp, strcpy functions using pointer.
#include <stdio.h>

void myStrcpy(char *d, char *s)
{
    while (*s != '\0')
    {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';
}

int myStrcmp(char *a, char *b)
{
    while (*a && *b)
    {
        if (*a != *b)
            return *a - *b;
        a++;
        b++;
    }
    return *a - *b;
}

void myStrcat(char *d, char *s)
{
    while (*d != '\0')
        d++;

    while (*s != '\0')
    {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';
}

int main()
{
    char str1[100], str2[100], copy[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    myStrcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    if (myStrcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    myStrcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}