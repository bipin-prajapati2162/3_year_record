#include<stdio.h>
int stack[10], top=-1;


void push(int stack[]){
	int val;
	printf("For exit the value enter enter -1 \n");
	
	printf("enter the value : ");
	scanf("%d",&val);
	while(val!=-1){
		
		if(top==9){
			printf("\noverflow\n");
		
	    }
		else{
		
			top=top+1;
			stack[top]=val;
		}
		printf("enter the value : ");
		scanf("%d",&val);
	}
}
void display(int stack[]){
	int i;
	for(i=top;i>=0;i--){
		printf("%d\t",stack[i]);
	}
	
}
int pop(int stack[]){
	int val;
	if(top==-1){
		printf("\nunderflow:\n");
		
	}
	else{
		val=stack[top];
		top=top-1;
		return val;
	}
	
}

int peek(int stack[]){
	if(top==-1){
		printf("\n STACCK IS EMPTY\n ");
		return -1;
		
	}
	else{
		return (stack[top]);
	}
}

int main(){
	
	int val;
	push(stack);
	display(stack);
	val=pop(stack);
	printf("\n %d  is deleted now in the stack \n",val);
	display(stack);
	val= peek(stack);
	if (val!=-1){
		printf("\n THE VALUE STORED AT THE TOP OF STACK IS %d",val);
		
	}
	return 0;
	
	
}
