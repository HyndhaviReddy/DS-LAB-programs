#include<stdio.h>
#include<stdlib.h>
 struct node{
	 int n;
	 struct node*next,*prev;
      }*head=0,*newnode,*temp;
      void display(struct node*p){
	      if(p!=0){
		      printf("%4d",p->n);
		      return display(p->nxt);
	      }
      }
void creating(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->=a[i];
		if(head==0)head=temp=newnode;
		else{
			temp->nxt=newnode;
			temp=newnode;
		}
	}
	temp=head;
	display(temp);
}
int main(){
	int n,i;
	puts("enter n:");
	scanf("%d",&n);
	puts("enter the elements into the array:")
		int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	creating(a,n);
}

