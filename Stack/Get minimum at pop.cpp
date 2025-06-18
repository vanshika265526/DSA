/*
You are given an integer array A[]. You need to first push the elements of the array into a stack and then print minimum in the stack at each pop until stack becomes empty.

Examples:

Input: A[] = [1 2 3 4 5]
Output: 1 1 1 1 1 
*/

// Function to push all the elements into the stack.
stack<int> minStack;
stack<int> _push(int arr[], int n) {
    // your code here
    stack<int>st;
    while (!minStack.empty())
      {
        minStack.pop();
      }
    for(int i=0;i<n;i++){
        st.push(arr[i]);
        if(minStack.empty()){
            minStack.push(arr[i]);
        }
        else{ 
            //choosing min element and putting
            minStack.push(min(arr[i],minStack.top()));
        }
    }
        return st;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
    while(!s.empty()){
        cout<<minStack.top()<<" ";
        s.pop();
        minStack.pop();
    }
}
