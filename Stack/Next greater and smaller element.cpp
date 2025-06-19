//Given an array arr[ ] of integers, the task is to find the next greater element for each element of the array in order of their appearance in the array. 

class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>res(n,-1);  //result array initialized with all values -1
        stack<int>st;
        
        //traverse the array in reverse order
        for(int i=n-1;i>=0;i--){
            //removing the smaller elements
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            
            //if empty stack, no greater element
            if(st.empty()){
                res[i]= -1;
            }
            else{
                res[i]=st.top();
            }
            
            //push current element into stack
            st.push(arr[i]);
        }
        return res;
    }
};


//NEXT SMALLER ELEMENT
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallerElement(vector<int>& arr, int n) {
 
    vector<int> res(n,-1);
    stack<int> st;  // Stack to keep potential next smaller elements

    for (int i = n - 1; i >= 0; i--) {
        // Remove all elements that are not smaller
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        // If stack is empty, no smaller element to the right
        res[i] = st.empty() ? -1 : st.top();

        // Push current element for future comparisons
        st.push(arr[i]);
    }

    return res;
}

