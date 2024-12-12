#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the queue

int queue[MAX]; // Array to store the queue elements
int front = -1; // Front index
int rear = -1;  // Rear index

// Function to check if the queue is empty
int isEmpty() {
    return (front == -1);
}

// Function to check if the queue is full
int isFull() {
    return ((rear + 1) % MAX == front);
}

// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = value;
    printf("%d enqueued to the queue\n", value);
}

// Function to remove an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue\n");
        return -1;
    }
    int value = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    return value;
}

// Function to display the queue
void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if (value != -1) {
                    printf("Dequeued value: %d\n", value);
                }
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
