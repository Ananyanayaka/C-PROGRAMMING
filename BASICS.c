Hello world basic program 
#include <stdio.h>

int main() {
    printf("Hello, World!\n"); // This prints Hello, World! to the console
    return 0;  // Indicates that the program ran successfully
}
***********************************************************************************************************
//DATATYPES

#include <stdio.h>
#include <stdbool.h>  // For bool type (C99 and later)

int main() {
    // Integer Types
    int intVar = 42;
    short shortVar = 10;
    long longVar = 1234567890;
    long long longLongVar = 123456789012345;
    unsigned int unsignedIntVar = 200;
    
    // Floating-Point Types
    float floatVar = 3.14f;
    double doubleVar = 3.1415926535;
    long double longDoubleVar = 3.14159265358979323846;
    
    // Character Type
    char charVar = 'A';
    
    // Boolean Type (C99 and later)
    bool boolVar = true;

    // Single printf to display all data types and their sizes
    printf("Integer: %d, Size: %zu bytes | Short: %d, Size: %zu bytes | Long: %ld, Size: %zu bytes | Long Long: %lld, Size: %zu bytes | Unsigned Integer: %u, Size: %zu bytes\n",
            intVar, sizeof(intVar), shortVar, sizeof(shortVar), longVar, sizeof(longVar), longLongVar, sizeof(longLongVar), unsignedIntVar, sizeof(unsignedIntVar));

    printf("Float: %.2f, Size: %zu bytes | Double: %.10f, Size: %zu bytes | Long Double: %.20Lf, Size: %zu bytes\n",
            floatVar, sizeof(floatVar), doubleVar, sizeof(doubleVar), longDoubleVar, sizeof(longDoubleVar));

    printf("Character: %c, Size: %zu bytes | Boolean: %s, Size: %zu bytes\n",
            charVar, sizeof(charVar), boolVar ? "true" : "false", sizeof(boolVar));

    return 0;
}
//OUTPUT IT WILL SHOW SIZEOF DATA TYPES AND %Z IS USED TO DISPLAY THE SIZE AND "SIZEOF" KEY WORD TO DISPLAY SIZE OF VARIABLE 
Integer: 42, Size: 4 bytes | Short: 10, Size: 2 bytes | Long: 1234567890, Size: 8 bytes | Long Long: 123456789012345, Size: 8 bytes | Unsigned Integer: 200, Size: 4 bytes
Float: 3.14, Size: 4 bytes | Double: 3.1415926535, Size: 8 bytes | Long Double: 3.14159265358979323846, Size: 16 bytes
Character: A, Size: 1 bytes | Boolean: true, Size: 1 bytes


/* %d: Used for printing integers (int and short).
%ld: Used for printing long integers.
%lld: Used for printing long long integers.
%u: Used for printing unsigned integers.
%.2f: Prints a float with 2 decimal places.
%.10f: Prints a double with 10 decimal places.
%.20Lf: Prints a long double with 20 decimal places.
%c: Used for printing a char (single character).
%s: Used for printing a string (here it’s used for the bool value, converting true or false to string).*/
************************************************************************************************************
//VARIABLE

HERE LIST OF concepts to undestand 
/variable declaration syntax-"type variable_name;"-any data type mentined above can be the type 
/variable intialisation -meaning if any value is assigng to variable "int age = 25;"
/their is local variable and global variable -lets see this concept further 

//LOCAL AND GLOBAL VARIABLES and constant 
/THINGS TO OBSERVE 
/1.global variable is always declared outside the main function
/2.local variable -it will usually be local to the funtion it can be local to main function or local to "demo function"
/3.always syntax of program goes like this 
/----------libraies declaration-------------
/----------globalvariable declaration----------
/----------if any funtion are their write the definition of funtion -meaning the whole body of function -----------
/-----------main funtion---------------



#include <stdio.h>

// Global variable declaration
int globalVar = 10;  // This is a global variable, accessible throughout the program

// Global constant variable declaration
const int globalConstVar = 100;  // This is a global constant variable, cannot be modified


// Function to demonstrate the usage of local variables
void demoFunction() {
    // Local variable declaration
    int localVar = 5;  // This is a local variable, accessible only within this function
    const int constLocalVar = 100;  // A constant local variable (cannot be modified)


    // Printing values of local and global variables
    printf("Inside demoFunction:\n");
    printf("Constant local variable (constLocalVar) = %d\n", constLocalVar);  // Accessing constant local variable
    printf("Local variable (localVar) = %d\n", localVar);  // Accessing local variable
    printf("Global variable (globalVar) = %d\n", globalVar);  // Accessing global variable
    printf("Global constant variable (globalConstVar) = %d\n", globalConstVar);  // Accessing global constant variable
}

int main() {
    // Local variable in main function
    int mainLocalVar = 20;  // Local to main function

    printf("Inside main function:\n");
    printf("Local variable (mainLocalVar) = %d\n", mainLocalVar);  // Accessing local variable of main
    printf("Global variable (globalVar) = %d\n", globalVar);  // Accessing global variable

    // Calling demoFunction to show local and global variable usage
    demoFunction();

    return 0;


}

**************************************************************************************************************
OPERATOR IN C 


THEIR ARE THREE CATOGORIES IN C FOR OPERATORS
1.UNINARY OPERATOR EG:++ INCRIMENT OR -- DECREMENT 
2.BINARY OPERATOR  EG: + - / *  EG:A+B A-B 
3.TERNARY OPERATOR "SYNTAX:condition ? expression_if_true : expression_if_false;" EG PROGRAM DOWN 


#include <stdio.h>

// Function to demonstrate binary and unary operators
void demonstrateOperators(int a, int b) {
    // Unary operator: Increment and Decrement
    printf("Original value of a: %d\n", a);
    printf("Using unary increment on a: %d\n", ++a);  // Unary increment: increments a by 1 before using it
    printf("Using unary decrement on a: %d\n", --a);  // Unary decrement: decrements a by 1 before using it

    // Binary operators: Addition, Subtraction, Multiplication, and Division
    int sum = a + b;      // Binary addition
    int diff = a - b;     // Binary subtraction
    int prod = a * b;     // Binary multiplication
    int quotient = a / b; // Binary division (integer division)

    printf("Using binary addition (a + b): %d\n", sum);
    printf("Using binary subtraction (a - b): %d\n", diff);
    printf("Using binary multiplication (a * b): %d\n", prod);
    printf("Using binary division (a / b): %d\n", quotient);
    
    // Ternary operator: Conditional assignment
    // Check if a is greater than b using the ternary operator
    int max = (a > b) ? a : b;  // Ternary operator to find the maximum of a and b
    printf("Using ternary operator, the maximum value is: %d\n", max);
}

int main() {
    int x = 10, y = 5;

    // Function call to demonstrate the operators
    demonstrateOperators(x, y);

    return 0;
}
************************************************************************************************

Assesment operator 
=
+=
-=
*=
/=
%=

#include <stdio.h>

// Function to print all the outputs of assignment operators
void demonstrateAssignmentOperators(int a, int b) {
    // Original values
    printf("Original values: a = %d, b = %d\n\n", a, b);

    // 1. Simple Assignment Operator ( = )
    a = b;  // Assign the value of b to a
    printf("After a = b: a = %d, b = %d\n", a, b);

    // 2. Addition Assignment Operator ( += )
    a += b;  // Equivalent to a = a + b
    printf("After a += b: a = %d, b = %d\n", a, b);

    // 3. Subtraction Assignment Operator ( -= )
    a -= b;  // Equivalent to a = a - b
    printf("After a -= b: a = %d, b = %d\n", a, b);

    // 4. Multiplication Assignment Operator ( *= )
    a *= b;  // Equivalent to a = a * b
    printf("After a *= b: a = %d, b = %d\n", a, b);

    // 5. Division Assignment Operator ( /= )
    if (b != 0) {
        a /= b;  // Equivalent to a = a / b
        printf("After a /= b: a = %d, b = %d\n", a, b);
    } else {
        printf("Cannot perform a /= b because b is 0 (division by zero).\n");
    }

    // 6. Modulus Assignment Operator ( %= )
    if (b != 0) {
        a %= b;  // Equivalent to a = a % b
        printf("After a %%= b: a = %d, b = %d\n", a, b);
    } else {
        printf("Cannot perform a %%= b because b is 0 (modulo by zero).\n");
    }

    printf("\nFinal values: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 5;

    // Call the function to demonstrate assignment operators
    demonstrateAssignmentOperators(x, y);

    return 0;
}

******************************************************************************************************
Relational operators//Used to compare two variable 
it will return 1 if its true else zero

*************************************************************************************************8
