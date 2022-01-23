#include<bits\stdc++.h>
using namespace std;

struct Node{
	int data;
	 
	 struct Node *prev ;
	 struct Node *next;
	 
};

void DoublyLinkedList(struct Node* head )
{
	struct Node * ptr = head;
	while(ptr != NULL)
	{
		ptr= ptr->next ;
	}
	
	cout<<"Element :"<<ptr->data;

	 
}




int main()
{
	 struct Node* N1 ;
	 struct Node* N2 ;
	 struct Node* N3 ;
	 struct Node* N4 ;
	 
	 N1 =  (struct Node*) malloc (sizeof(struct Node));
	 N2 =  (struct Node*) malloc (sizeof(struct Node));
	 N3  =  (struct Node*) malloc (sizeof(struct Node));
	 
	 
	 N1 ->next = N2;
	 N1 ->prev = NULL;
	 
	 N2 ->next = N3;
	 N2 ->prev = N1 ;
	 
	 N3  ->next  = N4;
	 N3  ->prev  = N2 ;
	 
	 N4  -> next   = NULL;
	 N4  -> prev  =  N3;
	 
	 
	 cout<<"Linked List before insertion "<<endl;
	 
	  DoublyLinkedList(head);
	  
	  
	  
	 
//	   cout<<"Linked List After insertion "<<endl;
//	    head = insertAtfirst(head , 100);
//	   
//	  linkedlist_treversal(head);
	  
	  return 0;
	  
	 
}
