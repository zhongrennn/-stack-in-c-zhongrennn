#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 100

struct stack{
    int data[SIZE];
    int top;
};
struct stack S, S1;

int isEmpty(struct stack *p);
int isFull(struct stack *p);
void push(struct stack *p, int x);
int pop(struct stack *p);	

int main(void) {
    	S.top = S1.top = -1;

    	printf("Input the data to create a stack.\n");
    	int nums;   
    	printf("How many data? ");
    	scanf("%d",&nums);

    	//push n numbers to stack
    	int x;
    	for(int i=0; i<nums; i++){
		scanf("%d",&x);
		push(&S,x);
    	}
	
	//print stack 
	printf("The stack is: \n");
	int i;
	if(isEmpty(&S)){
		printf("Stack is empty\n");
	}else{
		for(i=S.top; i>-1; i--){
			printf("[%2d] %d\n", i, pop(&S));
		}
	}
 	
	return 0;
}

void push(struct stack *p, int x) {                                                
	if (isFull(p)) {  
		printf("Push Error! Stack is full!\n");
		exit(1); 
	}
	else {  
		p->top++;
		p->data[p->top]=x;
	}	
}

int pop(struct stack *p) {
	if (isEmpty(p)) {  
		printf("Pop Error! Stack is empty!\n");  
		exit(2);  
	}
	else {
		p->top = p->top - 1;
        return p->data[p->top+1];           
	}
}

int isEmpty(struct stack *p) {
	if (p->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct stack *p) {
	if (p->top == SIZE - 1) { 
        // printf("stack is full\n");
		return 1;  
	} else 
		return 0; 
}
