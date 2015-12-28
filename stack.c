#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int capacity;
    int size;
    int *elements;
}Stack;

Stack * createStack(int maxElement){
    Stack *s;
    s = (Stack *)malloc(sizeof(Stack));
    s->elements = (int *)malloc(sizeof(int) *maxElement);
    s->size = 0;
    s->capacity = maxElement;

    return s;

}

void pop(Stack *S){
    if(S->size == 0){
        printf("Stack is empty");
        return;
    }
    else{
        S->size--;
    }
    return;
}

int top(Stack *S){
    if(S->size == 0){
        printf("Stack is empty\n");
        exit(0);
    }
    return S->elements[S->size-1];
}


void push(Stack *S,int element){
    if(S->size == S->capacity){
        printf("Stack is full \n");
    }
    else{
        S->elements[S->size++] = element;
    }
    return;
}

int main(){
    Stack *S = createStack(5);

    push(S,7);
    push(S,5);
    push(S,21);
    push(S,-1);

    printf("Top element is %d\n",top(S));
    pop(S);
    printf("Top element is %d\n",top(S));
    pop(S);
    printf("Top element is %d\n",top(S));
    pop(S);
    printf("Top element is %d\n",top(S));
    pop(S);
}
