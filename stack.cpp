//COUSIN ALUKWE- BSE-01-0144/2025
//A C-program implementing push(), pop(), display(), stack-overflow() and stack-underflow()

#include <stdio.h>
#include <stdlib.h>

#define MAX 3  // Maximum size of the stack

int stack[MAX];
int top = -1;

// Push operation
void push(int value) {
    if (top >= MAX - 1) {
        printf("  Stack Overflow! Stack is full. Cannot push %d.\n", value);
    } else {
        stack[++top] = value;
        printf(" Successfully pushed: %d\n", value);
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty. Nothing to pop.\n");
    } else {
        printf("Successfully popped: %d\n", stack[top--]);
    }
}

// Display current stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Current Stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}


int main() {
    int choice, value;

    printf("Stack Implementation with Overflow & Underflow\n");

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting... happy?\n");
                exit(0);

            default:
                printf("Invalid choice! Please select from 1 to 4.\n");
        }
    }

    return 0;
}

