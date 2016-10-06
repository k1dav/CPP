#define	MAX_STACK_SIZE	5

// 定義STACK_ENTRY_CHAR: StackEntry為字元(char)型態
// 定義STACK_ENTRY_CHAR_POINTER: StackEntry為字元指標(char*)型態
// STACK_ENTRY_CHAR或STACK_ENTRY_CHAR_POINTER只能定義其中一個

//#define	STACK_ENTRY_CHAR
#define	STACK_ENTRY_CHAR_POINTER

// StackEntry是堆疊中存入的資料型態
// 使用者可自行定義成自己想要的型態
#ifdef	STACK_ENTRY_CHAR
typedef char StackEntry;
#endif	STACK_ENTRY_CHAR

#ifdef	STACK_ENTRY_CHAR_POINTER
typedef char * StackEntry;
#endif	STACK_ENTRY_CHAR_POINTER

struct Stack_t {
	int count; // 目前在堆疊中資料筆數
	StackEntry entry[MAX_STACK_SIZE]; // 堆疊資料陣列
}; 
typedef struct Stack_t Stack;

// 堆疊的抽象資料型態
// 不規定資料存放方式或位置, 只定義一組管理的介面函式
Stack *createStack();
bool stackFull(Stack *Stack);
bool stackEmpty(Stack *Stack);
int stackSize(Stack *Stack);
bool pushStack(Stack *Stack, StackEntry entry);
bool popStack(Stack *Stack, StackEntry *entry);
void clearStack(Stack *Stack);
void traverseStack(Stack *Stack, void (*process)(StackEntry));
void printStack(Stack *stack);
