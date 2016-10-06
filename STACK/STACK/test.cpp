#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#ifdef	STACK_ENTRY_CHAR
void print(StackEntry entry)
{
	printf("%c ", entry);
}
void printUpperCase(StackEntry entry)
{
	if (entry >= 'a' && entry <= 'z') printf("%c\n", entry + 'Z' - 'z');
	else printf("%c\n", entry);
}
void printStack(Stack *stack)
{
	for (int i = 0; i < stack->count; i++) {
		printf("%c\n", (int)stack->entry[i]);
	}
}

#endif

#ifdef	STACK_ENTRY_CHAR_POINTER
void print(StackEntry entry)
{
	printf("%s ", entry);
}

void printStack(Stack *stack)
{
	for (int i = 0; i < stack->count; i++) {
		printf("%s\n", (int)stack->entry[i]);
	}
}
#endif

void main()
{
	Stack *stack = createStack();

#ifdef	STACK_ENTRY_CHAR
	pushStack(stack, 'e');
	pushStack(stack, 'c');
	pushStack(stack, '2');
	pushStack(stack, 'z');
	pushStack(stack, 'w');
	pushStack(stack, 'a');
	StackEntry entry2;
	popStack(stack, &entry2);
	printf("entry2=%c\n", entry2);
	popStack(stack, &entry2);
	pushStack(stack, 'u');
	pushStack(stack, 'v');
#endif

	int choose = 0;
	while (choose != 6) {
		printf("1.open \n2.print\n3.rename\n4.move\n5.history\n6.quit\n");
		scanf("%d", &choose);
		printf("\n");
		switch (choose)
		{
		case 1:
			printf("open\n\n");
			pushStack(stack, "open");
			break;
		case 2:
			printf("print\n\n");
			pushStack(stack, "print");
			break;
		case 3:
			printf("rename\n\n");
			pushStack(stack, "rename");
			break;
		case 4:
			printf("move\n\n");
			pushStack(stack, "move");
			break;
		case 5:
			printf("history\n\n");
			pushStack(stack, "history");
			traverseStack(stack, print);
			break;
		case 6:
			printf("quit\n\n");
			break;
		default:
			break;
		}
	}

/*#ifdef	STACK_ENTRY_CHAR_POINTER
	pushStack(stack, "desk");
	pushStack(stack, "cat");
	pushStack(stack, "hello");
	pushStack(stack, "window");
	pushStack(stack, "apple");
	char *s;
	popStack(stack, &s);
	popStack(stack, &s);
	pushStack(stack, "ok");
	pushStack(stack, "thanks");
#endif	STACK_ENTRY_CHAR_POINTER

	//traverseStack(stack, print);
	//printf("\n");
	while (!stackEmpty(stack)) {
		StackEntry entry;
		if (popStack(stack, &entry)) {

#ifdef	STACK_ENTRY_CHAR
			printf("stack entry %c is popped\n", entry);
#endif	STACK_ENTRY_CHAR

#ifdef	STACK_ENTRY_CHAR_POINTER
			printf("stack entry %s is popped\n", entry);
#endif	STACK_ENTRY_CHAR_POINTER
		}
	}*/

	clearStack(stack);
	printf("------- after -----\n");
	traverseStack(stack, print);
	//printStack(stack);
	printf("\n");

}
