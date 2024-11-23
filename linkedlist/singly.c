// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int info;
//     struct node *next;
// };
// struct node *start;

// void add_at_beg ();
// void add_at_end ();
// void add_at_pos();
// void delete_beg();
// void delete_end();
// void delete_pos();
// void display();
// void search();
// void count();
// main ()
// {
//     int choice =0;
//     while(choice != 8)
//     {
//         printf("\n\nChoose one option from the following list ...\n");
//         printf("\n1.Insert at begining\n2.Insert at End\n3.Insert at any random location\n4.Delete from Beginning\n5. Delete from End\n6.Delete node from a specified location\n7.Display\n8.counting of node\n9.search\n10.Exit\n");
//         printf("\nEnter your choice?\n");
//         scanf("\n%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             add_at_beg();
//             break;
//             case 2:
//             add_at_end();
//             break;
//             case 3:
//             add_at_pos();
//             break;
//             case 4:
//             delete_beg();
//             break;
//             case 5:
//             delete_end();
//             break;
//             case 6:
//             delete_pos();
//             break;
//             case 7:
//             display();
//             break;
//             case 8:
//             count();
//             break;
//             case 9:
//             search();
//             case 10:
//             exit(0);
//             break;
//             default:
//             printf("\nPlease enter valid choice..");
//         }
//     }
// }
// void add_at_beg()
// {
//     struct node *ptr;
//     int item;
//     ptr = (struct node *) malloc(sizeof(struct node));
//     if(ptr == NULL)
//     {
//         printf("\nMemory Can not be Allocated.");
//     }
//     else
//     {
//         printf("\nEnter value\n");
//         scanf("%d",&item);
//         ptr->info = item;
//         ptr->next = start;
//         start = ptr;
//         printf("\nNode inserted\n");
//         display();
//     }

// }
// void add_at_end()
// {
//     struct node *ptr,*temp;
//     int item;
//     ptr = (struct node*)malloc(sizeof(struct node));
//     if(ptr == NULL)
//     {
//         printf("\nMemory Can not be allocated.");
//     }
//     else
//     {
//         printf("\nEnter value?\n");
//         scanf("%d",&item);
//         ptr->info = item;
//         ptr->next = NULL;
//         if(start == NULL)//LL is empty
//         {
//             start = ptr;
//             printf("\nNode inserted\n");
//             display();
//         }
//         else
//         {
//             temp = start;
//             while (temp -> next != NULL)
//             {
//                 temp = temp -> next;
//             }
//             temp->next = ptr;
//             printf("\nNode inserted\n");
//             display();

//         }
//     }
// }
// void add_at_pos()
// {
//     int i,pos,item;
//     struct node *ptr, *temp;
//     ptr = (struct node *) malloc (sizeof(struct node));
//     if(ptr == NULL)
//     {
//         printf("\nMemory can not be allocated.");
//     }
//     else
//     {
//         printf("\nEnter element value");
//         scanf("%d",&item);
//         ptr->info = item;
//         printf("\nEnter the position where you want to insert the item ");
//         scanf("\n%d",&pos);
//         temp=start;
//         for(i=1;i<pos-1;i++)
//         {
//             temp = temp->next;
//         }
//         ptr ->next = temp ->next;
//         temp ->next = ptr;
//         printf("\nNode inserted\n");
//         display();
//     }
// }
// void delete_beg()
// {
//     struct node *ptr;
//     if(start == NULL)
//     {
//         printf("\nList is empty\n");
//     }
//     else
//     {
//         ptr = start;
//         start = ptr->next;
//         printf("\n%d Node is deleted from the begining.\n",ptr->info);
//         free(ptr);
//         display();
//     }
// }
// void delete_end()
// {
//     struct node *temp1,*temp2;
//     if(start == NULL)
//     {
//         printf("\nlist is empty");
//     }
//     else if(start -> next == NULL)
//     {
//         printf("\n%d Node is deleted from the begining.\n",start->info);
//         start = NULL;
//         free(start);
//         display();
//     }

//     else
//     {
//         temp1 = start;
//         while(temp1->next != NULL)
//         {
//             temp2=temp1;;
//             temp1=temp1->next;
//         }
//         temp2->next = NULL;
//         printf("\n%d Node is deleted from the last.\n",temp1->info);
//         free(temp1);
//         display();
//     }
// }
// void delete_pos()
// {
//     struct node *temp1,*temp2;
//     int pos,i;
//     printf("\nEnter the pos of the node which you want to delete \n");
//     scanf("%d",&pos);
//     temp1=start;
//     for(i=1;i<pos;i++)
//     {
//         temp2 = temp1;
//         temp1 = temp1->next;
//     }
//     temp2 ->next = temp1 ->next;
//     printf("\n%d Node is Deleted from position %d\n",temp1->info,pos);
//     free(temp1);
//     display();
// }
// void search()
// {
//     struct node *ptr;
//     int item,i=0,flag=0;
//     ptr = start;
//     if(ptr == NULL)
//     {
//         printf("\nEmpty List\n");
//     }
//     else
//     {
//         printf("\nEnter item which you want to search?\n");
//         scanf("%d",&item);
//         while (ptr!=NULL)
//         {
//             if(ptr->info == item)
//             {
//                 printf("item found at location %d ",i+1);
//                 flag=0;
//                 break;
//             }
//             else
//             {
//                 flag=1;
//             }
//             i++;
//             ptr = ptr -> next;
//         }
//         if(flag==1)
//         {
//             printf("Item not found\n");
//         }
//     }

// }
// void display()
// {
//     struct node *ptr;
//     int count = 0 ;
//     ptr = start;
//     if(ptr == NULL)
//     {
//         printf("\nList is Empty\n");
//     }
//     else
//     {
//         printf("\nValues are:");
//         while (ptr!=NULL)
//         {
//             printf("%d ->",ptr->info);
//             ptr = ptr -> next;
//         }
//     }
// }
// void count()
// {
//     struct node *ptr;
//     int count = 0 , i =0;
//     ptr = start;
//     while (ptr!=NULL)
//         {
//         count++;
//         //i++;
//         ptr = ptr -> next;
//         }
//         printf("number of node : %d",count );
// }

#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};
struct node *start = NULL;

void add_at_beg();
void add_at_end();
void add_at_pos();
void delete_beg();
void delete_end();
void delete_pos();
void display();
void search();
void count();

int main() {
    int choice = 0;
    while(choice != 10) {
        printf("\n\nChoose one option from the following list ...\n");
        printf("\n1. Insert at beginning\n2. Insert at End\n3. Insert at any random location\n4. Delete from Beginning\n5. Delete from End\n6. Delete node from a specified location\n7. Display\n8. Counting of nodes\n9. Search\n10. Exit\n");
        printf("\nEnter your choice?\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                add_at_beg();
                break;
            case 2:
                add_at_end();
                break;
            case 3:
                add_at_pos();
                break;
            case 4:
                delete_beg();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                delete_pos();
                break;
            case 7:
                display();
                break;
            case 8:
                count();
                break;
            case 9:
                search();
                break;
            case 10:
                exit(0);
                break;
            default:
                printf("\nPlease enter a valid choice.\n");
        }
    }
    return 0;
}

void add_at_beg() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("\nMemory cannot be allocated.\n");
    } else {
        printf("\nEnter value:\n");
        scanf("%d", &item);
        ptr->info = item;
        if(start == NULL) {
            start = ptr;
            ptr->next = start;
        } else {
            temp = start;
            while(temp->next != start)
                temp = temp->next;
            ptr->next = start;
            temp->next = ptr;
            start = ptr;
        }
        printf("\nNode inserted\n");
        display();
    }
}

void add_at_end() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("\nMemory cannot be allocated.\n");
    } else {
        printf("\nEnter value:\n");
        scanf("%d", &item);
        ptr->info = item;
        if(start == NULL) {
            start = ptr;
            ptr->next = start;
        } else {
            temp = start;
            while(temp->next != start)
                temp = temp->next;
            temp->next = ptr;
            ptr->next = start;
        }
        printf("\nNode inserted\n");
        display();
    }
}

void add_at_pos() {
    int i, pos, item;
    struct node *ptr, *temp;
    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL) {
        printf("\nMemory cannot be allocated.\n");
    } else {
        printf("\nEnter element value:\n");
        scanf("%d", &item);
        ptr->info = item;
        printf("\nEnter the position where you want to insert the item:\n");
        scanf("%d", &pos);
        if(pos == 1) {
            add_at_beg();
            return;
        }
        temp = start;
        for(i = 1; i < pos - 1; i++) {
            temp = temp->next;
            if(temp == start) {
                printf("\nThere are less than %d elements in the list.\n", pos);
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted\n");
        display();
    }
}

void delete_beg() {
    struct node *ptr, *temp;
    if(start == NULL) {
        printf("\nList is empty\n");
    } else if(start->next == start) {
        ptr = start;
        start = NULL;
        printf("\n%d Node is deleted from the beginning.\n", ptr->info);
        free(ptr);
    } else {
        ptr = start;
        temp = start;
        while(temp->next != start)
            temp = temp->next;
        start = start->next;
        temp->next = start;
        printf("\n%d Node is deleted from the beginning.\n", ptr->info);
        free(ptr);
    }
    display();
}

void delete_end() {
    struct node *ptr, *temp;
    if(start == NULL) {
        printf("\nList is empty\n");
    } else if(start->next == start) {
        ptr = start;
        start = NULL;
        printf("\n%d Node is deleted from the end.\n", ptr->info);
        free(ptr);
    } else {
        ptr = start;
        while(ptr->next != start) {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = start;
        printf("\n%d Node is deleted from the end.\n", ptr->info);
        free(ptr);
    }
    display();
}

void delete_pos() {
    struct node *ptr, *temp;
    int pos, i;
    if(start == NULL) {
        printf("\nList is empty\n");
    } else {
        printf("\nEnter the position of the node to delete:\n");
        scanf("%d", &pos);
        if(pos == 1) {
            delete_beg();
            return;
        }
        ptr = start;
        for(i = 1; i < pos; i++) {
            temp = ptr;
            ptr = ptr->next;
            if(ptr == start) {
                printf("\nThere are less than %d elements in the list.\n", pos);
                return;
            }
        }
        temp->next = ptr->next;
        printf("\n%d Node is deleted from position %d\n", ptr->info, pos);
        free(ptr);
    }
    display();
}

void search() {
    struct node *ptr;
    int item, i = 0, flag = 0;
    if(start == NULL) {
        printf("\nEmpty List\n");
    } else {
        printf("\nEnter item to search:\n");
        scanf("%d", &item);
        ptr = start;
        do {
            if(ptr->info == item) {
                printf("Item found at location %d\n", i + 1);
                flag = 1;
                break;
            }
            i++;
            ptr = ptr->next;
        } while(ptr != start);
        if(flag == 0) {
            printf("Item not found\n");
        }
    }
}

void display() {
    struct node *ptr;
    if(start == NULL) {
        printf("\nList is empty\n");
    } else {
        printf("\nValues are:\n");
        ptr = start;
        do {
            printf("%d -> ", ptr->info);
            ptr = ptr->next;
        } while(ptr != start);
        printf("connected to Start\n");
    }
}

void count() {
    struct node *ptr;
    int count = 0;
    if(start == NULL) {
        printf("\nList is empty\n");
    } else {
        ptr = start;
        do {
            count++;
            ptr = ptr->next;
        } while(ptr != start);
        printf("Number of nodes: %d\n", count);
        
    }
}
