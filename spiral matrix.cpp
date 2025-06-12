class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;        //result array
        if(matrix.empty())return result;      //if your input matrix is empty return null array
         int top=0;
         int bottom=matrix.size()-1;
         int left=0;
         int right=matrix[0].size()-1;

      //remember the order of spiral top->right->bottom->left->>>repeats 
         while(top<=bottom && left<=right){
            //traversing from left to right first
            for(int i=left;i<=right;i++){             //use directions here not spiral order
                result.push_back(matrix[top][i]);     //1st element of spiral order used here = top
            }
                top++;
            //traversing from top to bottom second
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
                right--;
            //traversing from right to left if applicable
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
          //traversing from bottom to top if applicable
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
         }
         return result;
 }
};
