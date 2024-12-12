#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int deque[MAX];
int front = -1;
int rear = -1;

int isFull() {
    return ((front == 0 && rear == MAX-1) || front == rear + 1);
}

int isEmpty() {
    return (front == -1);
}

void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full. Cannot insert %d at front\n", value);
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front = front - 1;
    }
    deque[front] = value;
    printf("%d inserted at front\n", value);
}

void insertRear(int value) {
    if (isFull()) {
        printf("Deque is full. Cannot insert %d at rear\n", value);
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    deque[rear] = value;
    printf("%d inserted at rear\n", value);
}

void deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty. Cannot delete from front\n");
        return;
    }
    printf("%d deleted from front\n", deque[front]);
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}

void deleteRear() {
    if (isEmpty()) {
        printf("Deque is empty. Cannot delete from rear\n");
        return;
    }
    printf("%d deleted from rear\n", deque[rear]);
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear = rear - 1;
    }
}

void displayDeque() {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\nDeque Operations:\n");
        printf("1. Insert at front\n");
        printf("2. Insert at rear\n");
        printf("3. Delete from front\n");
        printf("4. Delete from rear\n");
        printf("5. Display deque\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                printf("Enter value to insert at rear: ");
                scanf("%d", &value);
                insertRear(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                displayDeque();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
