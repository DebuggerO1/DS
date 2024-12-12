#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty() {
    return (front == -1);
}

int isFull() {
    return (rear == MAX - 1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d enqueued to the queue\n", value);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue\n");
        return -1;
    }
    int value = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
    return value;
}

void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
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
