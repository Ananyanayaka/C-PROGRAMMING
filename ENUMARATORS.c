//enumarator is a user defined data type 
//using it we can assign the name to intigral constant .

// Define a structure to store book details with book type as enum
struct Book {
    char title[50];
    char author[50];
    int year;
    float price;
    enum BookType type;  // Enum variable inside struct
};

int main() {
    // Declare and initialize a structure variable with enum type
    struct Book book1 = {"1984", "George Orwell", 1949, 15.99, Fiction};

    // Print information about the book
    printf("Book: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Year: %d\n", book1.year);
    printf("Price: %.2f\n", book1.price);
    printf("Type: %d\n", book1.type); // Prints the enum value, which is 0 for Fiction

    return 0;
}
