#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int size;
struct stack
{
	int arr[MAX];
	int top;
};
void init_stk(struct stack*st, int num)
{
	st->top==size-1;
}
void push(struct stack*st,int num)
{
	if(st->top==size-1)
	{
		printf("\nstack overflows");
		return;
	}
	st->top++;
	st->arr[st->top]=num;
}
int pop(struct stack*st)
{
	int num;
	if(st->top==-1)
	{
		printf("stack underflow");
		return 0;
	}
	num=st->arr[st->top];
	st->top--;
	return num;
}
void display(struct stack*st)
{
	int i;
	for(i=st->top;i>=0;i--)
		printf("\n%d",st->arr[i]);
}
int main()
{
	int element, opt, val;
	struct stack ptr;
	init_stk(&ptr);
	printf("\n enter stack size:");
	scanf("%d",& size);
	while(1)
	{
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n4.quit");
		printf("\n");
		printf("\n enter your option:");
		scanf("%d",& opt);
		switch(opt)
		{
			case 1:
				printf("\nenter element into stack:");
				scanf("%d",& val);
				push(&ptr,val);
				break;
			case 2:
				element=pop(&ptr);
				printf("the element popped from stack is %d",element);
				break;
			case 3:
				printf("\nthe current stack element are:");
				display(&ptr);
				break;
			case 4:
				exit(0);
			default:
				printf("enter correct option! try again");
		}
	}
	return(0);
}
