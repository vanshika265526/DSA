//DELETION- 
#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data1){
		data=data1;
	}
};
void insertPos(Node*& head, int value, int pos){
	Node* temp=new Node(value);
	if(pos==1){
		temp->next=head;
		head=temp;
		return;
	}
	Node* current=head;
	for(int i=1;i<pos-1 && current!=NULL;i++){
		current=current->next;
	}
	
	temp->next=current->next;
	current->next=temp;
	
}

void printd(Node*& head){
	Node* current=head;
	while(current!=NULL){
		cout<<current->data<<endl;
		current=current->next;
	}
}

//1.Delete from start
void deleteStart(Node*& head){
	if(head!=NULL){      //checks if linked list is not empty
		Node* temp=head;
		head=head->next;
		delete temp;
	}
}

//2.Delete from end
void deleteEnd(Node*& head){
	if(head!=NULL){             //checks if linked list not empty
		if(head->next==NULL){       //checks if there is only one node
			delete head;
			head=NULL;
		}
		else{
			Node* current=head;         //one pointer for traversing and deleting the last element
			Node* prev=NULL;            //another pointer to make next=null in second last node
			while(current->next!=NULL){
				prev=current;
				current=current->next;
			}
		delete current;
		prev->next=NULL;
		}
	}
}

//Delete from particular position
void deletepos(Node*& head, int pos){
	
	if(pos==1){       //for deleting first node
		Node*temp=head;
		head=head->next;
		delete temp;
		return;
	}
		Node* current=head;               //pointer for traversing till pos-1
		Node* prev=NULL;
		for(int i=1;i<pos && current!=NULL; i++){
			prev=current;
			current=current->next;
		}
		
		prev->next=current->next;
		delete current;
	
}

int main(){
	Node* head=NULL;
	insertPos(head, 100 ,1);   // [100]
	insertPos(head,200,1);     //[200,100]
	insertPos(head,300,1);     //[300,200,100]
	insertPos(head,400,1);     //[400,300,200,100]
	cout<<"Original List: "<<endl;
	printd(head);
	cout<<"After deleting from start: "<<endl;
	deleteStart(head);         //deletes 400 
	printd(head);              //[300,200,100]
	cout<<"After deleting from end: "<<endl;
	deleteEnd(head);           //[300,200]
	printd(head);
	cout<<"Delete from position 2"<<endl;
	deletepos(head,2);
	printd(head);
	return 0;
}
