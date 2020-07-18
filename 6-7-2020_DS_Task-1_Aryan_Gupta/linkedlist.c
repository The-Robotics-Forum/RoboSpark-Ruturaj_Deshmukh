#include <stdio.h>
#include <stdlib.h>


struct Node {
  int key;
  struct Node* next;
};

void BeginingInsertion(struct Node** ref, int data) {

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


  new_node->key = data;
  new_node->next = (*ref);

  (*ref) = new_node;
}


void insertAfter(struct Node* node, int data) {
  if (node == NULL) {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->key = data;
  new_node->next = node->next;
  node->next = new_node;
}

void EndInsertion(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *ref;

  new_node->key = data;
  new_node->next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void deleteNode(struct Node** ref, int key) {
  struct Node *temp = *ref, *prev;

  if (temp != NULL && temp->key == key) {
    *ref = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->key != key) {
    prev = temp;
    temp = temp->next;
  }


  if (temp == NULL) return;


  prev->next = temp->next;

  free(temp);
}


void printList(struct Node* node) {
  while (node != NULL) {
    printf(" %d ", node->key);
    node = node->next;
  }
}


int main() {
  struct Node* head = NULL;

  EndInsertion(&head, 5);
  BeginingInsertion(&head, 2);
  BeginingInsertion(&head, 6);

  insertAfter(head->next, 4);

  printf("Linked list: ");
  printList(head);
  printf("\n");
EndInsertion(&head, 9);
  printf("Linked list After Insertion: ");
  printList(head);


  printf("\nAfter deleting an element: ");
  deleteNode(&head, 4);
  printList(head);
}
