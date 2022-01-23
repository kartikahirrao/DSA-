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
  
  
  
    
   LinkedlistTreaversal(head);
  
  
  return 0;
	
}

