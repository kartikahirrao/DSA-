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



struct Node * insertAtFirst(struct Node*head, int data){

	struct Node*ptr = (struct Node*) malloc(sizeof(struct Node));
	ptr -> data=data;
	
	ptr -> next =head;
	return ptr;
}


struct Node * insertAtend(struct Node*head, int data){

	struct Node*ptr = (struct Node*) malloc(sizeof(struct Node));
	ptr -> data=data;
	
	struct Node* p = head;
	
	while(p->next!= NULL)
	{
		p=p->next;
	}
	
	p->next = ptr;
	ptr-> next = NULL;
	return head;	
}

	struct Node * insertAtIndex(struct Node*head, int data , int index){
	struct Node*ptr = (struct Node*) malloc(sizeof(struct Node));
	
	struct Node* p = head;
	
	int i=0;

	while(i!=index-1){
		p = p->next;
		i++;
		
	}
	ptr -> data =data;
	ptr ->next = p->next;
	p->next = ptr;
	
	return head;
}

int main()
{
	 struct Node * head ;
   struct Node * second ;
    struct Node * third ;
    struct Node * fourth ;
    
	// alocate memory for nodes in the linked list in heap..
  head = (struct Node *) malloc(sizeof (struct Node));
  second = (struct Node *) malloc(sizeof (struct Node));
  third = (struct Node *) malloc(sizeof (struct Node));
  fourth = (struct Node *) malloc(sizeof (struct Node));
  // link first and second node
  head -> data =7;
  head->next = second;
  
    // link sceond  and third node
  second -> data =11;
  second->next = third ;
  
  // link sceond  and third node
  third-> data = 66;
  third->next = fourth ;
  
  // terminating the list at the third nude
  fourth-> data = 41;
  fourth->next = NULL ;
  
  
  
	cout<<"LinkedList Before Insertion  ::"<<endl;

   LinkedlistTreaversal(head);
  cout<<"LinkedList after Insertion ::"<<endl;
  
//  head=insertAtFirst(head ,56);
  head=insertAtend(head ,56);
  
  
  
  LinkedlistTreaversal(head);
  
  return 0;
	
}
