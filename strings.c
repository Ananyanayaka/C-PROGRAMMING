//sub string 
#include<stdio.h>
#include<string.h>
int main(){
    char full_word []="hello world";
    char sub_word[]="world";
    char *result= strstr(full_word,sub_word);
    if( result!=NULL)
    {printf("found sub string=%d,result");
    else printf("no sub string found");}
}
*************************************************************************************************
//finding length of string
#include <stdio.h>
#include <string.h>  // For strlen()

int main() {
    char str[] = "Hello, World!";
    
    // Find the length of the string
    int length = strlen(str);
    
    printf("Length of the string: %d\n", length);  // Output: 13
    
    return 0;
}
****************************************************************************************************
//comparing two string
#include <stdio.h>
#include <string.h>  // For strcmp()

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    
    // Compare strings
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is lexicographically smaller.\n");
    } else {
        printf("First string is lexicographically greater.\n");
    }

    return 0;
}
*********************************************************************************************
//copying a string 
#include <stdio.h>
#include <string.h>  // For strcpy()

int main() {
    char source[] = "Good Morning";
    char destination[50];  // Ensure enough space for the destination string

    // Copy the source string to destination
    strcpy(destination, source);
    
    printf("Copied string: %s\n", destination);  // Output: Good Morning
    
    return 0;
}
************************************************************************************************
//concatinate two string 

#include <stdio.h>
#include <string.h>  // For strcat()

int main() {
    char str1[50] = "Hello";
    char str2[] = ", World!";
    
    // Concatenate str2 to str1
    strcat(str1, str2);
    
    printf("Concatenated string: %s\n", str1);  // Output: Hello, World!
    
    return 0;
}
************************************************************************************************
//REVERSING STRING
#include <stdio.h>
#include <string.h>  // For strlen()

void reverse_string(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello";
    
    // Reverse the string
    reverse_string(str);
    
    printf("Reversed string: %s\n", str);  // Output: olleH
    
    return 0;
}
*********************************************************************************************
//CONVERTING STRING TO UPPER CASE
#include <stdio.h>
#include <ctype.h>  // For toupper()

void to_uppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);  // Convert to uppercase
        i++;
    }
}

int main() {
    char str[] = "Hello World";
    
    // Convert the string to uppercase
    to_uppercase(str);
    
    printf("Uppercase string: %s\n", str);  // Output: HELLO WORLD
    
    return 0;
}
*************************************************************************************************
//FINDING A SUB STRING IN A STRING 
#include <stdio.h>
#include <string.h>  // For strstr()

int main() {
    char str[] = "Hello, World!";
    char sub[] = "World";
    
    // Find the substring in str
    char *result = strstr(str, sub);
    
    if (result) {
        printf("Substring found at position: %ld\n", result - str);  // Output: 7
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}
*************************************************************************************************
//STRING IS A PALENDROME
#include <stdio.h>
#include <string.h>  // For strlen()

int is_palindrome(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
    return 1;  // Is a palindrome
}

int main() {
    char str[] = "madam";
    
    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");  // Output: The string is a palindrome.
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
//Summary of C String Functions Used:
strlen(): Finds the length of a string.
strcmp(): Compares two strings.
strcpy(): Copies one string to another.
strcat(): Concatenates two strings.
strstr(): Finds the first occurrence of a substring in a string.
tolower() and toupper(): Convert characters to lowercase or uppercase.
is_palindrome(): Custom function to check if a string is a palindrome.


//READING STRING FROM THE KEYBOARD

#include <stdio.h>

int main() {
    char str[100];
    
    // Using scanf to read a string (without spaces)
    printf("Enter a string: ");
    scanf("%s", str);  // Reads until the first space or newline
    
    printf("You entered: %s\n", str);
    return 0;
}

