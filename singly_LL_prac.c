#include<stdio.h>
#include<stdlib.h>
struct Node{
	int info;
	struct Node*next;
}*First=NULL;
void create(){ 
	int n,i;
	int A[100];
	printf("Enter the size of array:");
	scanf("%d",&n);
	First=(struct Node*)malloc(sizeof(struct Node));
	struct Node*t,*last;
	First->info=A[0];
	First->next=NULL;
	last=First;
	for(i=0;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->info=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void traverse()
{
	struct Node*temp;
	if(First==NULL)
	{
		printf("Empty list");
	}
	else{
		temp=First;
		while(temp!=0){
		printf("%d",temp->info);
			temp=temp->next;
	}}
}
void insert_beg()
{
	int data;
	struct Node*temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter element to be inserted:");
        scanf("%d",&data);
	temp->info=data;
	temp->next=First;
	First=temp;
}
int main()
{       int ch;
        while(1)
	{ 
		printf("choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				traverse();
				break;
			case 2:
				insert_beg();
				break;
			case 3:
				exit(0);
			
		}
	}
}



