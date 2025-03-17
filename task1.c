#include <stdio.h>
#include <stdlib.h>

// Function to write data to a file
void writeToFile() {
    FILE *file = fopen("example.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "Hello, this is a test file.\n"); // Write data to file
    fclose(file); // Close the file
    printf("Data written to file successfully.\n");
}

// Function to append data to a file
void appendToFile() {
    FILE *file = fopen("example.txt", "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "Appending new data to the file.\n"); // Append data to file
    fclose(file); // Close the file
    printf("Data appended successfully.\n");
}

// Function to read and display file contents
void readFromFile() {
    FILE *file = fopen("example.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    char line[100];
    printf("File contents:\n");
    while (fgets(line, sizeof(line), file) != NULL) { // Read file line by line
        printf("%s", line);
    }
    fclose(file); // Close the file
}

int main() {
    int choice;
    while (1) {
        // Display menu options
        printf("\nFile Operations:\n");
        printf("1. Write to File\n");
        printf("2. Append to File\n");
        printf("3. Read from File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume newline character

        // Execute corresponding function based on user choice
        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                appendToFile();
                break;
            case 3:
                readFromFile();
                break;
            case 4:
                exit(0); // Exit program
            default:
                printf("Invalid choice, try again!\n");
        }
    }
    return 0;
}
