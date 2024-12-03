COLLECTION OF HETROGENIOUS  DATA TYPES 
WHERE AS ARRAY ARE THE COLLECTION OF HOMOGENIOUS DATA TYPES 

#include<stdio.h>
int main(){
    struct car {
        char name_parameter[5];
        int i;
        float x;
    }
    struct car car1={"abcde",5,3.12};
    printf("the struct tye are %s\n"car1.name_parameter)
    return 0;

}

STRUCTURE WITH ARRAY 
#include <stdio.h>

// Define a structure to store student details
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Declare an array of structures
    struct Student students[3] = {
        {"Alice", 101, 90.5},
        {"Bob", 102, 78.4},
        {"Charlie", 103, 82.3}
    };

    // Displaying information of all students using a loop
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}


Passing Structure to Functions


#include <stdio.h>

// Define a structure to store employee details
struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function to display employee details
void display(struct Employee emp) {
    printf("Employee Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Salary: %.2f\n", emp.salary);
}

int main() {
    // Declare and initialize a structure variable
    struct Employee emp1 = {"John Smith", 1001, 55000.75};

    // Pass the structure to the function
    display(emp1);

    return 0;
}



STRUCTURE WITH POINTER 
#include <stdio.h>

// Define a structure to store book details
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    // Declare a structure variable
    struct Book book1 = {"C Programming", "Dennis Ritchie", 25.50};

    // Declare a pointer to the structure
    struct Book *ptr = &book1;

    // Access structure members using the pointer
    printf("Book Title: %s\n", ptr->title);
    printf("Book Author: %s\n", ptr->author);
    printf("Book Price: %.2f\n", ptr->price);

    return 0;
}


