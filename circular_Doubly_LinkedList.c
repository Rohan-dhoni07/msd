#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
}st;

st* head;
void add( int data) {
  if (last != NULL) return last;

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;


  last = newNode;
  last->next = last;

  return last;
}

struct Node* addFront(struct Node* last, int data) {
  if (last == NULL) return addToEmpty(last, data);

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;

  newNode->next = last->next;

  last->next = newNode;

  return last;
}

