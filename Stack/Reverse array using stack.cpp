//FIRST METHOD - USES STACK CONCEPT - TAKES O(n) SPACE

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;       //creating a character stack object;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);    //put elements of array into stack(order will be same till here)
        }

        int i=0;
        while(!st.empty()){      //start a loop
            s[i]=st.top();       //put the top most element into array one by one (reversing starts)
            st.pop();            //delete the top most element so that in next loop you donot get the same top again  and again
            i++;                 //keep incrementing i(basic)
        }
    }
};


//SECOND OPTION - WITHOUT STACK - MOST USED TWO POINTERS METHOD CALLED - takes   O(1) space
  void reverseString(vector<char>& s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}
