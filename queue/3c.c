#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Maximum size of the priority queue

typedef struct {
    int value;
    int priority;
} PQElement;

PQElement pq[MAX];
int size = 0;

// Function to check if the priority queue is empty
int isEmpty() {
    return size == 0;
}

// Function to check if the priority queue is full
int isFull() {
    return size == MAX;
}

// Function to insert an element into the priority queue
void enqueue(int value, int priority) {
    if (isFull()) {
        printf("Priority queue is full. Cannot enqueue %d\n", value);
        return;
    }
    PQElement element;
    element.value = value;
    element.priority = priority;
    pq[size++] = element;
    printf("%d enqueued to the priority queue with priority %d\n", value, priority);
}

// Function to remove the highest priority element from the priority queue
int dequeue() {
    if (isEmpty()) {
        printf("Priority queue is empty. Cannot dequeue\n");
        return -1;
    }
    int highestPriorityIndex = 0;
    for (int i = 1; i < size; i++) {
        if (pq[i].priority > pq[highestPriorityIndex].priority) {
            highestPriorityIndex = i;
        }
    }
    int value = pq[highestPriorityIndex].value;
    for (int i = highestPriorityIndex; i < size - 1; i++) {
        pq[i] = pq[i + 1];
    }
    size--;
    return value;
}

// Function to display the priority queue
void displayQueue() {
    if (isEmpty()) {
        printf("Priority queue is empty.\n");
        return;
    }
    printf("Priority queue: \n");
    for (int i = 0; i < size; i++) {
        printf("Value: %d, Priority: %d\n", pq[i].value, pq[i].priority);
    }
}

int main() {
    int choice, value, priority;
    while (1) {
        printf("\nPriority Queue Operations:\n");
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
                printf("Enter priority: ");
                scanf("%d", &priority);
                enqueue(value, priority);
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
