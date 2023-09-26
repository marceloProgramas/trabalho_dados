/*#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Stack {
    struct Node* top;
};

void initializeStack(struct Stack* stack) {
    stack->top = NULL;
}

int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

void push(struct Stack* stack, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("A pilha está vazia.\n");
        return -1;
    }

    struct Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("A pilha está vazia.\n");
        return -1; 
    }

    return stack->top->data;
}

int main() {
    struct Stack stack;
    int num[5] = {3,5,3,1,7};
    initializeStack(&stack);

    for (int i = 0; i < 5; i++) {
      push(&stack, num[i]);
    }

    printf("Elemento no topo da pilha: %d\n", peek(&stack));

    printf("Elementos desempilhados: ");
    while (!isEmpty(&stack)) {
        printf("%d ", pop(&stack));
    }
    printf("\n");

    return 0;
}
*/