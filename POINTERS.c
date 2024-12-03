POINTER DECLARATION AND INITIALISATION 
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;  // Pointer declaration
    ptr = &num;  // Pointer initialization: assign the address of 'num' to 'ptr'

    printf("Value of num: %d\n", num);       // Prints the value of 'num'
    printf("Address of num: %p\n", &num);    // Prints the address of 'num'
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereferencing ptr to print the value it points to

    return 0;
}



call by reference 
#include <stdio.h>

// Function to add two numbers using Call by Reference
void add(int *b, int *a, int *sum) {
    *sum = *a + *b;  // Dereferencing the pointers to perform the addition
}

int main() {
    int num1 = 5;   // Declare and initialize num1
    int num2 = 6;   // Declare and initialize num2
    int result;     // Declare result to store the sum

    // Call the add function and pass the addresses of num1, num2, and result
    add(&num1, &num2, &result);  // Pass the memory addresses of num1 and num2

    // Print the result of the addition
    printf("The sum is %d", result);  // Print the value stored in result

    return 0;  // Return from main function
}

CALL BY VAUE 
#include<stdio.h>
void calling_fun(int x)
{int b=3;
x=b;
}

int main(){
    int a=2;
    printf("print value of a before calling:%d\n",a);
    calling_fun(a);
    printf("print value aftr calling %d\n",a);

}