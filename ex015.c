#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *mergeLists(Node *l1, Node *l2) {
    Node *mergedList = NULL;
    Node *current = NULL;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data < l2->data) {
            if (mergedList == NULL) {
                mergedList = l1;
                current = l1;
            } else {
                current->next = l1;
                current = current->next;
            }
            l1 = l1->next;
        } else {
            if (mergedList == NULL) {
                mergedList = l2;
                current = l2;
            } else {
                current->next = l2;
                current = current->next;
            }
            l2 = l2->next;
        }
    }

    if (l1 != NULL) {
        if (mergedList == NULL) {
            mergedList = l1;
        } else {
            current->next = l1;
        }
    }

    if (l2 != NULL) {
        if (mergedList == NULL) {
            mergedList = l2;
        } else {
            current->next = l2;
        }
    }

    return mergedList;
}

void printList(Node *head) {
    Node *current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    Node *l1 = (Node *)malloc(sizeof(Node));
    l1->data = 1;
    l1->next = (Node *)malloc(sizeof(Node));
    l1->next->data = 7;
    l1->next->next = (Node *)malloc(sizeof(Node));
    l1->next->next->data = 9;
    l1->next->next->next = (Node *)malloc(sizeof(Node));
    l1->next->next->next->data = 10;
    l1->next->next->next->next = NULL;

    Node *l2 = (Node *)malloc(sizeof(Node));
    l2->data = 2;
    l2->next = (Node *)malloc(sizeof(Node));
    l2->next->data = 3;
    l2->next->next = (Node *)malloc(sizeof(Node));
    l2->next->next->data = 8;
    l2->next->next->next = NULL;

    printf("Lista l1: ");
    printList(l1);

    printf("Lista l2: ");
    printList(l2);

    Node *mergedList = mergeLists(l1, l2);

    printf("Lista mesclada l3: ");
    printList(mergedList);

    // Liberar a memória alocada para as listas
    Node *temp;
    while (l1 != NULL) {
        temp = l1;
        l1 = l1->next;
        free(temp);
    }

    while (l2 != NULL) {
        temp = l2;
        l2 = l2->next;
        free(temp);
    }

    while (mergedList != NULL) {
        temp = mergedList;
        mergedList = mergedList->next;
        free(temp);
    }

    return 0;
}
