#include <stdio.h>

/* Function declarations */
void print1ToN(int n);
void printEven(int n);
void printOdd(int n);

int main() {
    int choice, n;

    printf("==== MENU ====\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter value of N: ");
    scanf("%d", &n);

    switch (choice) {
        case 1:
            print1ToN(n);
            break;
        case 2:
            printEven(n);
            break;
        case 3:
            printOdd(n);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

/* Function to print numbers from 1 to N */
void print1ToN(int n) {
    int i;
    printf("Numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

/* Function to print even numbers up to N */
void printEven(int n) {
    int i;
    printf("Even numbers up to %d:\n", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
}

/* Function to print odd numbers up to N */
void printOdd(int n) {
    int i;
    printf("Odd numbers up to %d:\n", n);
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
}
