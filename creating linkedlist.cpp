#include<iostream>
using namespace std;

// Defining the node structure
struct Node{
	int data; // the interger data will go here
	Node* next; // the address of the next node
};

Node* createList(int values[], int size){
	
	Node *head= new Node{ values[0], nullptr}; 
	Node* current= head;
	
	for (int i=1; i<size; i++){
		current->next= new Node {values[1],nullptr};
		current=current->next;
	}
	return head;
}

// the function for printing nodes
void printList(Node *head){
	cout<<"The values in this linked list are "<<endl;
	while(head!=NULL){
	cout<<head->data<<endl;
	head=head->next; // making the current address as the next address
	}
};

// The main function
int main(){
	
	// The user insert the number to the size 
	int size;
	cout<<"Enter the required  size of Node "<<endl;
	cin>>size;
	
	//create a dynamic size
	int* values= new int[size];
	cout<<"Enter the data you wish to be in your Linked List"<<endl;
	for (int i=0; i<size; i++){
		cout<<"Enter element "<<i+1<<endl;
		cin>>values[i];
	}

	// Linkedlist is created
	Node* myList=createList(values,size);
	printList(myList);
}
    
