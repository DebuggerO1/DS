#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->next = NULL;
    return node;
}
void insertAtEnd(struct node** head, int data) {
    struct node* new_node = newNode(data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}
struct node* reverse(struct node* head){
    struct node *prev = NULL, *current = head, *next = NULL;
    while (current != NULL) {
        next = current->next;  // Store next
        current->next = prev;  // Reverse current node's pointer
        prev = current;        // Move pointers one position ahead.
        current = next;
    }
    head = prev;
    return head;
}
void printList(struct node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct node* head = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insertAtEnd(&head, value);
    }

    printf("Original list: ");
    printList(head);

    head = reverse(head);

    printf("Reversed list: ");
    printList(head);

    return 0;
}
