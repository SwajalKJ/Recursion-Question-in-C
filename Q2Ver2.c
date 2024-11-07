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
    printf("String: ");
    displayString(str);
    printf("\n");
    
    printf("Reverse String: ");
    reverseDisplayString(str);
    printf("\n");

}

void displayString(const char *str) 
{
    if (*str == '\0') 
    {
        return;
    }
    putchar(*str);
    displayString(str + 1);
}

void reverseDisplayString(const char *str)
{
    if (*str == '\0') {
        return;
    }
    reverseDisplayString(str + 1);
    putchar(*str);
}
