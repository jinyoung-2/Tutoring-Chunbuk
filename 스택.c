#include <stdio.h>
#define MAX_SIZE 100

typedef struct _Stack {
	int data[MAX_SIZE];
	int top;
} Stack;

void init(Stack* s) {
	s->top = -1;
}

/*
	isEmpty : 공백 검사 메서드
	params : stack포인터, 이유 = 스택에 직접 접근해서 값을 변경해야하기 때문
	return : int , 이유 = 참, 거짓 판별
*/
int isEmpty(Stack* s)
{
	if (s->top == -1)
		return -1;
	else
		return 0;
}
/*
	isFull : 포화 검사 메서드
	params : stack포인터, 이유 = 스택에 직접 접근 -> 값 변경
	return : int , 이유 = 참, 거짓 판별
*/
int isFull(Stack* s)
{
	if (s->top >= MAX_SIZE)
		return -1;
	else
		return 0;
}

/*
	push : 삽입 메서드
	params : stack포인터, int형 변수
	return : void
*/

void push(Stack* s, int a)
{
	if (isFull(s) == -1)
		printf("Stack is Full");
	s->top++;
	s->data[s->top] = a;
	//s->data[++(s->top)]=a;
}

/*
	pop : 삭제 메서드
  params : stack포인터
	return : int
*/

int pop(Stack* s)
{
	if (isEmpty(s) == -1)
	{
		printf("Stack is empty");
		return -1;     //Q. return -1을 안 해 줘도 되나요? //data값이 -1일 수도 있어서, exit()이용 추천!
	}
	else
		return s->data[s->top--];
	//s->data[(s->top)--];와 동일 
}
/*
  peek : 검색 메서드(top이 가리키는 데이터 알려줌)
  params : stack포인터
  return : int
*/
int peek(Stack* s)  //예외처리
{
	if (isEmpty(s) == -1)
	{
		printf("Stack is empty");
		return -1;
	}
	else
		return s->data[s->top];
}

/*
  printStack : 스택 원소 출력
  params : stack포인터
  return : void
*/
void printStack(Stack* s) //예외처리
{
	if (isEmpty(s) == -1)
		printf("Stack is empty");
	else
	{
		int i;
		for (i = 0; i <= s->top; i++)
			printf("%d ", s->data[i]);
	}
}

int main(void) {
	Stack stack;
	init(&stack);


	return 0;
}



//<<튜티 코드>>
//#include <stdio.h>
//#define MAX_SIZE 100
//
//typedef struct _Stack {
//	int data[MAX_SIZE];
//	int top;
//} Stack;
//
//void init(Stack* s) {
//	s->top = -1;
//}
//
//// 공백 검사
//int isEmpty(Stack* s) {
//	return (s->top == -1);
//}
//
//// 포화 검사
//int isFull(Stack* s) {
//	return (s->top == (MAX_SIZE - 1));
//}
//
//// 삽입
//void push(Stack* s, int item) {
//	if (isFull(s)) {
//		printf("스택이 다 찼습니다\n");
//		return;
//	}
//	else {
//		// ++을 먼저 하는 이유 : 초기 top -1
//		s->data[++(s->top)] = item;
//	}
//}
//
//// 삭제
//int pop(Stack* s) {
//	if (isEmpty(s)) {
//		printf("스택이 비었습니다.\n");
//		return -1;
//		// 예제니깐 -1로 했다. -1로 하면 안된다!! 이유 : 스택에 데이터로 -1이 들어갈 수 있기 때문.
//	}
//	else {
//		return s->data[(s->top)--];
//	}
//}
//
//int main(void) {
//	Stack stack;
//	init(&stack);
//	push(&stack, 1);
//	push(&stack, 2);
//	push(&stack, 3);
//	push(&stack, 4);
//	push(&stack, 5);
//
//
//
//	return 0;
//}
