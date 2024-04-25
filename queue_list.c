#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
struct node* link;
}st;;
st* front;
st* rear;
void enqueue(int x){
    st* nnode = malloc(sizeof(st));
    nnode->data=x;
    nnode->link=NULL;    
    if(front ==NULL && rear ==NULL){
        front=nnode;
        rear=nnode;
    }
    else{
        rear->link=nnode;
        rear = nnode;
    }
}

void dequeue(){
        if(front ==NULL){
    printf("Queue is Empty\n");
         return;
         } st* ptr = front;
   front= front->link;
   free(ptr);
}

void  display(){
    if(front ==NULL)
    printf("Queue is Empty\n");
    st* ptr = front;
    while(ptr!=NULL){
        printf("%d ->",ptr->data);
ptr=ptr->link;    }
printf("NULL");
}


int main(){
    enqueue(13);
enqueue(3);
enqueue(0);
enqueue(1);
enqueue(9);
enqueue(13);
enqueue(3);
dequeue();
display();
return 0;
}