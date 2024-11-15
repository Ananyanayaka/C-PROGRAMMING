# C Variables
```c

•	When variable is declared a memory allocation is done 
•	It is necessary  for compiler to know the the type of data that the variable will store , hence VARIABLE Is declared with its type
•	Declaration is necessary bcz C Iis statistical language 

Basic Syntax:
type variable_name;

int age;
float salary;
char grade;
double pi = 3.14159;

```

## More clarity on the declarartion

```c
---> int a =1 ;in this both declaration  of variable and intialisation is done 

---> b=1; this will give error called undeclared variable ,because declariang variable means u must specify the data type to it ,in this line only initialisation is done.
how will memory be allocated for above variables

```
## Datat types that can be used to declare the variables 

```c
![alt text](image.png)
```

## Memory allocation of variables 
```c
Variable is always defined by its data type  thus size is decided by the type of the variable and the  where to allocate that is which memory region will be decided based on the scope of the variable ,as well as storage class, lets discuss further about the MEMORY REGION , SCOPE AND STORAGE CLASS .
```

## MEMORY REGION 

Stack Memory
Heap Memory (Dynamic Memory)
Data Segment (Global/Static Memory)
Text Segment (Code Segment)

## Stack Memory

Purpose: The stack is used for managing function calls and local variables. It grows and shrinks as functions are called and return.

Characteristics:

Automatic: Variables are automatically allocated and deallocated.
Scope: Local variables and function parameters are stored on the stack.
Lifespan: The lifetime of variables stored on the stack is limited to the duration of the function call.
Size: Limited and usually smaller compared to the heap.
Memory Management: Managed by the system automatically.






