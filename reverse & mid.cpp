#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data1){
		data=data1;
		next=NULL;
	}
};
void insertPos(Node*& head, int pos, int value){
	Node* temp=new Node(value);
	if(pos==1){
		temp->next=head;
		head=temp;
		return;
	}
	Node* current=head;
	for(int i=1;i<pos-1&& current!=NULL;i++){
		current=current->next;
	}
	temp->next=current->next;
	current->next=temp;
	
}
void printd(Node*& head){
	Node* current=head;
	while(current!=NULL){
		cout<<current->data<<" ";
		current=current->next;
	}
}

void reverse(Node*& head){
	Node *prev, *next=NULL;
	Node *current=head;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	
}

void mid(Node*& head){
	Node *temp=head;
	int count=0;
	while(temp!=NULL){         //for counting size of linked list
		count++;
		temp=temp->next;
	}
	count/=2;                  //finding mid
	temp=head;
	while(count--){           
		temp=temp->next;
	}
	cout<< temp->data;
}

int main(){
	Node* head=NULL;
	insertPos(head, 1, 100);
	insertPos(head,1,200);
	insertPos(head,1,300);
	printd(head);
	reverse(head);
	printd(head);
	mid(head);
}
