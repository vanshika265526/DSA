class Solution{
  public:
    void insertbottom(stack<int>& st, int value){
      //check if stack empty or not
      if(st.empty()){
        cout<<"Stack was empty\n";
        st.push(value);       //insert at first position directly
        return;
      }
      stack<int> temp;         //make a new temp stack and place all elements of original stack into it
      while(!st.empty()){  
        temp.push(st.top());
        st.pop();
      }
      //now put the insert new element in original empty stack at first place
      st.push(value);

      //bring back all the element from top to original stack
      while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
      }

    }

  };
  
      
      
      
