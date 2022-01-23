#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct stack{
	int size;
	int top;
	int *arr;
	
};

//stack Top() Operation 

int stackTop(struct stack *sp)
{
	return sp->arr[sp->top];
}


//stackBottom Operation



//Peek opertion for stack
int Peek(struct stack *sp, int i)
{
	int arrInd = sp->top-i+1;
	if(arrInd < 0)
	{
		cout<<"Not a valid position for the stack"<<endl;
		return -1;
	}
	else {
		return sp->arr[arrInd];
	}
}

//POP opertion for stack
int  POP(struct stack* ptr )
{
	if(isfull(ptr))
	{
		cout<<"stack UnderFlow"<<endl;
		return -1;
	}
	else
	{
	int val = ptr->arr[ptr->top];
	ptr->top--;
	
	}
}


//Push opertion for stack
void Push(struct stack* ptr ,int val)
{
	if(isfull(ptr))
	{
		cout<<"stack OV=verFlow"<<endl;
	}
	else
	{
		ptr ->top ++;
		ptr->arr[ptr->top] = val;
	}
}




//This operation is checking that the stack is empty or full ..
int isFull(struct stack* ptr)
{
	if(ptr->top==size-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}

//This operation is checking that the stack is empty or full ..
int isEmpty(struct stack* ptr)

{
	if(ptr->top==-1)
	
	{
		return 1;
		
	}
	else{
		return 0;
	}
}
int main()
{
	struct stack *sp = (struct stack*) malloc(sizeof(struct stack));
	sp->size = 10;
	sp->top = -1;
	sp->arr = (int *) malloc(sp->size * sizeof(int));
	cout<<"stack has been created successfull"<<endl;
	
	cout<<endl<<isFull(sp);
	cout<<endl<<isEmpty(sp);
	
	Push(sp, 10);
	Push(sp, 3);
	Push(sp, 3);
	Push(sp, 4);
	Push(sp, 5);
	Push(sp, 6);
	Push(sp, 7);
	Push(sp, 8);
	Push(sp, 9);
	Push(sp, 10);
	Push(sp, 11);
	
	cout<<endl<<isFull(sp);
	cout<<endl<<isEmpty(sp);

	
}

















