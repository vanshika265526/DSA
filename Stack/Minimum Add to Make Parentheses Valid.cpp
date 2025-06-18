//Minimum Add to Make Parentheses Valid

//METHOD 1- NORMAL WITHOUT STACK
class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance=0;
        int insertions=0;

        for(char c:s){
            if(c=='('){
                balance++;
            }
            else{
                if(balance>0){
                    balance--;
                }
                else{
                    insertions++;
                }
            }
        }
        return balance+insertions;
    }
};


//METHOD2 = USING STACKS
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;     //instead of balance variable use a stack
        int insertions=0;
        for(char c:s){
            if(c=='('){
                st.push(c);        //++
            }
            else{
                if(!st.empty()){           //same as above condition balance>0
                    st.pop();         //--
                }
                else{
                    insertions++;       //++
                }
            }
        }
        return insertions+st.size();
    }
};
