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
