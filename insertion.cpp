#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int data1, Node* next1){
		data=data1;
		next=next1;
	}
	
};

//Insertion - 1. Start

void insertstart(Node*& head, int value){
		Node* temp=new Node(value,head);  //new node 	
		head=temp;
}


void printlist(Node* head){
	//displaying
	Node *Current=head;
	while(Current!=NULL){
		cout<<Current->data<<" ";
		Current=Current->next;
	}
}


//INSERTION- 2. END
void end(Node*& head, int value){
	
	
	//traversing till the last node
	Node *current=head;
	while(current->next!=NULL){     
		current=current->next;
	}
	
	//creating node to be inserted
	Node *temp=new Node(value,NULL);
	
	//connecting current node(last) to new node
	current->next=temp;

}


//INSERTION- 3. PARTICULAR POSITION
void position(Node*& head, int val, int pos){
	//creating the new node
	Node* temp=new Node(val,NULL);
	if(pos==1){
		temp->next=head;
		head=temp;
	}
	
	Node* temp1=head;
	for(int i=1;i<pos-1 && temp!=NULL; i++){
		temp1=temp1->next;
	}
	
	temp->next=temp1->next;
	temp1->next=temp;
	
}

int main() {
    Node* head = NULL;

    // Test insert at start
    insertstart(head, 100);  // 100
    insertstart(head, 400);  // 400 -> 100
    insertstart(head, 500);  // 500 -> 400 -> 100

    // Test insert at end
    end(head, 10);     // 500 -> 400 -> 100 -> 10

    // Test insert at position
    position(head, 999, 2); // 500 -> 999 -> 400 -> 100 -> 10

    // Print final list
    printlist(head);

    return 0;
}

