#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Stack *createStack(){
	Stack *stack = (Stack *)malloc(sizeof(Stack));
	stack->count = 0;
	return stack;
}

bool stackFull(Stack *stack){
	return stack->count == MAX_STACK_SIZE;
	//if(stack->count == MAX_STACK_SIZE) return true;
	//else return false;
}

bool stackEmpty(Stack *stack){
	return stack->count == 0;
	//if(stack->count == 0) return true;
	//else return false;
}

int stackSize(Stack *stack){
	return stack->count;
}

bool pushStack(Stack *stack, StackEntry entry){
	if (stackFull(stack)) {
		for (int i = 0; i < stack->count-1; i++) {
			stack->entry[i] = stack->entry[i + 1];
		}
		stack->entry[stack->count-1] = entry;
		return true;
	}
	else {
		stack->entry[stack->count] = entry;
		stack->count++;
		return true;
	}
}

bool popStack(Stack *stack, StackEntry *entry){
	if (stackEmpty(stack)) return false;
	stack->count--;
	*entry = stack->entry[stack->count];
	//*entry = stack->entry[stack->count-1];
	//stack->count--;
	return true;
}

void clearStack(Stack *stack){
	stack->count = 0;
}

void traverseStack(Stack *stack, void(*process)(StackEntry)){ //for each
	for (int i = stack->count-1; i >=0; i--) {
		process(stack->entry[i]);
	}
	printf("\n\n");
}

