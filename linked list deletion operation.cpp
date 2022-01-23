#include<bits/stdc++.h>
using namespace std;  


struct Node{
	int data;
	struct Node* next;
};

void LinkedlistTreaversal(struct Node* ptr )
{
	while(ptr != NULL)
	{

	cout<<"Element:"  <<" "<<ptr ->data<<endl;
	ptr = ptr -> next;
	}
}

//case 1 deleting the firat element form linked list;

struct Node*deleteFirst(struct Node * head)
{
	struct Node* ptr = head;
	head = head->next;
	free(ptr);
	return head;
	
}

//case 2 deleting the at  given index  element form linked list;

struct Node*deleteatIndex(struct Node * head , int index)
{
	struct Node* p= head;
	struct Node* q= head-> next;
	
	for(int i=0; i<index-1; i++)
	{
		p=p -> next ;
		q= q->next;
	}
	p->next = q->next;
	
	free(q);
	return head;
	
	
}

//case 3: delete Last NOde 

struct Node*deleteatLast(struct Node * head )
{
	struct Node* p= head;
	struct Node* q= head-> next;
	
	while(q->next != NULL)

	{
		p=p -> next ;
		q= q->next;
	}
	p->next = NULL;
	
	free(q);
	return head;
	
	
}

//Case 4 deleting a node for giving values 

struct Node*deleteatvalue(struct Node * head , int value)
{
	struct Node* p= head;
	struct Node* q= head-> next;
	
	while(q->data != value  && q->next!=NULL)
	{
		p=p -> next ;
		q= q->next;
	}
	
	if (q->data == value )
	{
		p->next = q->next;
		
		free(q);
	}
	return head;
	
	
}


int main()
{
  struct Node * head ;
   struct Node * second ;
    struct Node * third ;
    struct Node * fourth ;
    struct Node * five ;
    
	// alocate memory for nodes in the linked list in heap..
  head = (struct Node *) malloc(sizeof (struct Node));
  second = (struct Node *) malloc(sizeof (struct Node));
  third = (struct Node *) malloc(sizeof (struct Node));
  fourth = (struct Node *) malloc(sizeof (struct Node));
  five = (struct Node *) malloc(sizeof (struct Node));
  // link first and second node
  head -> data = 4;
  head->next = second;
  
    // link sceond  and third node
  second -> data =3;
  second->next = third ;
  
  // link sceond  and third node
  third-> data = 8;
  third->next = fourth ;
  
  // terminating the list at the third nude
  fourth-> data = 20;
  fourth->next =five ;
  
  five-> data = 10;
  five->next = NULL; 
  
  
  cout<<"Linked List Before deletion:"<<endl;
  LinkedlistTreaversal(head);
   
   
//   Case 1: For Delete first ELement for the linked list 
//   head = deleteFirst(head);

//Case 2:At Index 
//   head = deleteatIndex(head , 0);

//Case 3: Deletinge element last Node in LInked LIst ..

//head = deleteatLast(head);

//Case 4: Deleting value in LInekd List in by value..




   head =deleteatvalue(head ,20);
    cout<<"Linked List After deletion:"<<endl;
    LinkedlistTreaversal(head);
  
  
  return 0;
	
}

