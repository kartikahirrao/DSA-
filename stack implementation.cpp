#include<iostream>
#include<stdlib.h>

using namespace std;

struct stack {
	int size; 
	int top; 
	int *arr;
};


int isEmpty(struct stack *ptr)
{
	if(ptr-> top == -1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int isFull(struct stack *ptr)
{
	if(ptr -> top == ptr->size-1)
	{
		return 1;	
	}
	else 
	{
		return 0;
	}
}

 int main()
 {
// 	struct stack s;
// 	s.size= 80;
// 	s.top = -1;
// 	s.arr = (int *) malloc (sizeof(int ));
// 	return 0;

	struct stack *s;
 	s->size= 80;
 	s->top = -1;
 	s->arr = (int *) malloc (s->size* sizeof(int ));
 	
 	
 	//check if stack is empty
 	
 	
 

if(isEmpty(s)){
	cout<<"The stack is empty";
	
}
else {
	cout<<"The stack is not empty";
}
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
