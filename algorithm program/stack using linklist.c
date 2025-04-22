#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct stack {
	int data;
	struct stack *next;
};
struct stack *top =NULL;

struct stack *push(struct stack *top){
	int val;
	printf("\n enter the value= ");
	scanf("%d",&val);
	
	while (val!=-1){
		struct stack *ptr;
		ptr= (struct stack*)malloc(sizeof(struct stack));
	
		
		ptr->data=val;
		if (top==NULL){
			ptr->next=NULL;
			top=ptr;
		}
		else{
			ptr->next=top;
			top=ptr;
		}
		printf("\n enter the value ");
		scanf("%d",&val);
	
	}
	return top;
			
}


struct stack *display(struct stack *top){
	struct stack *ptr;
	ptr=top;
	if ( top==NULL){
		printf("\n STACK IS EMPTY ");
	}
	else{
		while (ptr!=NULL){
			printf("  %d\t ",ptr->data);
			//printf("  \n address %d\n  ",ptr);
			ptr=ptr->next;
		}
	}
	
}

struct stack *pop(struct stack *top){
	struct stack *ptr;
	ptr=top;
	if ( top==NULL){
		printf("\n STACK IS UNDERFLOW ");
	}
	else{
		top=top->next;
		printf("\n THE VALUE IS BEING DELETED IS : %d",ptr->data);
		free(ptr);
	}
	return top;
}

int peek(struct stack *top){
	if (top==NULL){
		return -1;
	}
	else {
		return top->data;
	}
}

int main(){
	int val;
	top=push(top);
	display(top);
	//printf("%d",top);
	printf("\n");
	
//	top=pop(top);
//	printf("\n");
	//printf("%d",top);
//	display(top);
//	top=pop(top);
//	printf("\n");
//	display(top);
	top=peek(top);
	if(top!=-1){
		printf("The value at the top is = %d",top);
	}
	else{
		printf("The stack is empty ");
	}
	
	
}
