#include<bits\stdc++.h>
using namespace std;

struct Node{
	int data;
	 
	 struct Node * next ;
	 
};


void linkedlist_treversal( struct Node *head )
{
	
	struct Node* ptr = head;
	
	do{
		
		cout<<"Element :"<<ptr->data<<endl;
		
		ptr = ptr->next;
		
	}while(ptr!= head);
	
}

struct Node * insertAtfirst( struct Node * head , int data)
{
	  struct Node* ptr = (struct Node*)malloc ( sizeof(struct Node));
	  
	  struct Node *p = head -> next ;
	  
	  ptr -> data = data ;
	  while(p->next != head )
	  {
	  	p= p->next;
	  	
	  }
//	  cout<<"Element :" <<ptr->data<<endl;	  
	  
	  //At  the this point is in the last NOde of the circular Linkedlist so.
	  
	  
	  p->next =ptr;
	  
	  
	  ptr->next = head ;
	  head = ptr;
	  return head ;
}





int main()
{
	 struct Node* head ;
	 struct Node* second ;
	 struct Node* third  ;
	 
	 head =  (struct Node*) malloc (sizeof(struct Node));
	 second =  (struct Node*) malloc (sizeof(struct Node));
	 third  =  (struct Node*) malloc (sizeof(struct Node));
	 
	 
	 head ->data = 10;
	 head -> next = second;
	 
	 second ->data = 20;
	 second ->next= third ;
	 
	 third -> data = 30;
	 third -> next = head;
	 
	 
	 cout<<"Linked List before insertion "<<endl;
	 
	  linkedlist_treversal(head);
	  
	  
	  
	 
	   cout<<"Linked List After insertion "<<endl;
	    head = insertAtfirst(head , 100);
	   
	  linkedlist_treversal(head);
	  
	  return 0;
	  
	 
}
