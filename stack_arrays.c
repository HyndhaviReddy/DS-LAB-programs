#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 100
int stack[SIZE];
int top=-1;
void push (int dement);
int pop();
int main()
{ 
	int choice, data ;
	while(choice!=0)
	{
		printf("1.push");
		printf("2.pop");
		printf("3.size");
		printf("4.exit");
		printf("enter your choice:");
		scanf("%d",& choice);
		switch(choice)
		{
			case 1:
				printf("enter data to push into stack:");
				scanf("%d",& data);
				push(data);
				break;
			case 2:
				data = pop();
					if (data!=INT_MIN)
						printf("data=>%d",data);
				break;
			case 3:
				printf("stack size:%d",top+1);
				break;
			case 4:
				printf("exiting from app");
				exit(0);
				break;
			default:
				printf("Invalid choice , please try again ");
		}
	}
	void push(int element)
	{
		if(top>=SIZE)
		{
			printf("stack overflows , can't add more events");
			return;
		}
		top++;
		stack[top]=element;
		printf("data pushed to stack");
	}
	int pop()
	{
		if(top<0)
		{
			printf("stack is empty");
			return INT_MIN;
		}
	}
}




		
