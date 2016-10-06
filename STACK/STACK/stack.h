#define	MAX_STACK_SIZE	5

// �w�qSTACK_ENTRY_CHAR: StackEntry���r��(char)���A
// �w�qSTACK_ENTRY_CHAR_POINTER: StackEntry���r������(char*)���A
// STACK_ENTRY_CHAR��STACK_ENTRY_CHAR_POINTER�u��w�q�䤤�@��

//#define	STACK_ENTRY_CHAR
#define	STACK_ENTRY_CHAR_POINTER

// StackEntry�O���|���s�J����ƫ��A
// �ϥΪ̥i�ۦ�w�q���ۤv�Q�n�����A
#ifdef	STACK_ENTRY_CHAR
typedef char StackEntry;
#endif	STACK_ENTRY_CHAR

#ifdef	STACK_ENTRY_CHAR_POINTER
typedef char * StackEntry;
#endif	STACK_ENTRY_CHAR_POINTER

struct Stack_t {
	int count; // �ثe�b���|����Ƶ���
	StackEntry entry[MAX_STACK_SIZE]; // ���|��ư}�C
}; 
typedef struct Stack_t Stack;

// ���|����H��ƫ��A
// ���W�w��Ʀs��覡�Φ�m, �u�w�q�@�պ޲z�������禡
Stack *createStack();
bool stackFull(Stack *Stack);
bool stackEmpty(Stack *Stack);
int stackSize(Stack *Stack);
bool pushStack(Stack *Stack, StackEntry entry);
bool popStack(Stack *Stack, StackEntry *entry);
void clearStack(Stack *Stack);
void traverseStack(Stack *Stack, void (*process)(StackEntry));
void printStack(Stack *stack);
