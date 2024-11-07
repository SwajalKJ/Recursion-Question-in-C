#include <stdio.h>
#include <string.h>

void displayString(const char *str);
void reverseDisplayString(const char *str);

void main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    displayString(str);
    reverseDisplayString(str);

}
void displayString(const char *str) 
{
    printf("String: %s\n", str);
}

void reverseDisplayString(const char *str) 
{
    int length = strlen(str);
    printf("Reverse String: ");
    for (int i = length - 1; i >= 0; i--) 
    {
        putchar(str[i]);
    }
    printf("\n");
}
