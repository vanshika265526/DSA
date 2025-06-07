#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        int n = mat.size();

        // Step 1: Transpose the matrix
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Step 2: Reverse each column
        for(int col = 0; col < n; col++) {
            int top = 0, bottom = n - 1;
            while(top < bottom) {
                swap(mat[top][col], mat[bottom][col]);
                top++;
                bottom--;
            }
        }
    }
};

// Function to print matrix
void printMatrix(const vector<vector<int>>& mat) {
    for(const auto& row : mat) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    cout << "Enter matrix elements row-wise:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    Solution obj;
    obj.rotateby90(mat);

    cout << "\nRotated Matrix (90 degrees anti-clockwise):\n";
    printMatrix(mat);

    return 0;
}
