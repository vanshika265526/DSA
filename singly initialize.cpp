
//method 1 - define and point head node with values
//using constructor to initialize(better)
#include <iostream>
using namespace std;
struct Node{
	public:
	int data;
	Node* next;
	Node(int data1,Node* next1){
		data=data1;
		next=next1;
		
	}
	
};

int main(){
	Node *head=new Node(4,nullptr);
	cout<<"Data: "<<head->data<<endl;
	return 0;
}


//method2 (not a good choice) direct in main
#include <iostream>
using namespace std;

struct Node{
	public:
	int data;
	Node* next;	
};
int main(){
	Node *head=new Node();  //default constructor will work here
	head->data=4;
	head->next=nullptr;
	
	cout<<"Node: "<<head->data<<endl;
	return 0;
}	
