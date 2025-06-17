// STACK = LIFO

#include <iostream>
using namespace std;

class Stack {
    int* arr;  //array for stack
    int top;  //topmost value variable
    int size;  //size of array

public:
    Stack(int s) {    //constructor with size
        size = s;
        arr = new int[s];
        top = -1;
    }

    // PUSH - insert operation in stack
    void push(int value) {
        if (top == size - 1) {       
            cout << "Stack overflow\n";
            return;
        } else {
            top++;
            arr[top] = value;
            cout << "Pushed the value into top\n";
        }
    }

    // POP - deletion in stack
    void pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
        } else {
            cout << "Element popped: " << arr[top] << endl;
            top--;
        }
    }

    // PEEK - returning the topmost element
    void topElement() { // renamed from 'top' to avoid confusion with variable name
        if (top == -1) {
            cout << "Underflow\n";
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    // isEmpty
    bool empty() {
        return top == -1;
    }

    // size
    int isSize() {
        return top + 1;
    }

    // display
    void display() {
        if (top == -1) {
            cout << "Underflow\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    ~Stack() {
        delete[] arr;
    }
};

// Main function
int main() {
    Stack S(5);
    S.push(10);       // Output: Pushed the value into top
    S.push(20);       // Output: Pushed the value into top
    S.push(30);       // Output: Pushed the value into top
    S.topElement();   // Output: Top element: 30
    S.pop();          // Output: Element popped: 30
    S.topElement();   // Output: Top element: 20
    S.display();      // Output: Stack elements: 20 10
    cout << "Size: " << S.isSize() << endl; // Output: Size: 2
    S.pop();          // Output: Element popped: 20
    S.pop();          // Output: Element popped: 10
    cout << "Is Empty? " << (S.empty() ? "Yes" : "No") << endl; // Output: Is Empty? Yes

    return 0;
}
