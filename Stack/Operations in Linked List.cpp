#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;
    int size;

public:
    Stack() {
        top = NULL;
        size = 0;
    }

    // PUSH - insert at top
    void push(int value) {
        Node* newNode = new Node(value);      //make the new node

        if (newNode == NULL) {
            cout << "Stack overflow\n";
        } else {
            newNode->next = top;           //join new node with previous last node(top) 
            top = newNode;                 //update new node as top now
            size++;                        //increase stack size
            cout << "Pushed " << value << " into the stack\n";
        }
    }

    // POP - remove from top
    void pop() {
        if (top == NULL) {
            cout << "Stack underflow\n";
            return;
        } else {
            Node* temp = top;              //create temp for deleting
            cout << "Popped " << top->data << " from stack\n";
            top = top->next;               //join top to next
            delete temp;                   //delete the element
            size--;                        //decrease the size
        }
    }

    // PEEK - return the top element
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return top->data;          //return top's data
        }
    }

    // isEmpty - check if stack is empty
    bool isempty() {
        return top == NULL; // 
    }

    // size - return current size of stack
    int sizes() {
        return size;
    }

    void display(){
        if(top==NULL){
          cout<<"Underflow\n";
          return;
        }
        cout<<"Stack elements";
            Node* current=top;
            while(current!=NULL){
                cout<<current->data<<"\n";
                current=current->next;
            }
          cout<<endl;
        }
            
};

// Main function to demonstrate stack operations
int main() {
    Stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.pop();

    cout << "Top element is: " << S.peek() << endl;
    cout << "Current size of stack: " << S.sizes() << endl;
    cout << "Is stack empty? " << (S.isempty() ? "Yes" : "No") << endl;
    S.display();
    return 0;
}
