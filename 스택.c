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
	isEmpty : ���� �˻� �޼���
	params : stack������, ���� = ���ÿ� ���� �����ؼ� ���� �����ؾ��ϱ� ����
	return : int , ���� = ��, ���� �Ǻ�
*/
int isEmpty(Stack* s)
{
	if (s->top == -1)
		return -1;
	else
		return 0;
}
/*
	isFull : ��ȭ �˻� �޼���
	params : stack������, ���� = ���ÿ� ���� ���� -> �� ����
	return : int , ���� = ��, ���� �Ǻ�
*/
int isFull(Stack* s)
{
	if (s->top >= MAX_SIZE)
		return -1;
	else
		return 0;
}

/*
	push : ���� �޼���
	params : stack������, int�� ����
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
	pop : ���� �޼���
  params : stack������
	return : int
*/

int pop(Stack* s)
{
	if (isEmpty(s) == -1)
	{
		printf("Stack is empty");
		return -1;     //Q. return -1�� �� �� �൵ �ǳ���? //data���� -1�� ���� �־, exit()�̿� ��õ!
	}
	else
		return s->data[s->top--];
	//s->data[(s->top)--];�� ���� 
}
/*
  peek : �˻� �޼���(top�� ����Ű�� ������ �˷���)
  params : stack������
  return : int
*/
int peek(Stack* s)  //����ó��
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
  printStack : ���� ���� ���
  params : stack������
  return : void
*/
void printStack(Stack* s) //����ó��
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



//<<ƩƼ �ڵ�>>
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
//// ���� �˻�
//int isEmpty(Stack* s) {
//	return (s->top == -1);
//}
//
//// ��ȭ �˻�
//int isFull(Stack* s) {
//	return (s->top == (MAX_SIZE - 1));
//}
//
//// ����
//void push(Stack* s, int item) {
//	if (isFull(s)) {
//		printf("������ �� á���ϴ�\n");
//		return;
//	}
//	else {
//		// ++�� ���� �ϴ� ���� : �ʱ� top -1
//		s->data[++(s->top)] = item;
//	}
//}
//
//// ����
//int pop(Stack* s) {
//	if (isEmpty(s)) {
//		printf("������ ������ϴ�.\n");
//		return -1;
//		// �����ϱ� -1�� �ߴ�. -1�� �ϸ� �ȵȴ�!! ���� : ���ÿ� �����ͷ� -1�� �� �� �ֱ� ����.
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
