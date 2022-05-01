1. brute force approach
> range of elements
> if we find 0, we set non-zero of row and col = -1
> 0 should not be touched
> Time Complexity (N*M) * (N+M)

2. optimed brute force
> take 2 dummy array, 1 -> size of col, 2-> size of row
> find 0, set the row and col 0
> linear traverse the matrix
> check the dummy array and if you find zero then set matrix zero in that place
> Time Complexity (N*M) + (N+M)
> Space Complexity  O(N+M)

3. best approach
> take first row -> col dummy array
> take first col -> row dummy array
> a[0][0] = same, it should be initialized as 0
> start traverse, if find 0 so mark row-col = 0
> back traversal
> time compexity - 2 * (N*M)
> Space compexity - O(1)

// only 5 test cases passed
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // initialized the first col1 as 0
        int col1 = 1;
        // cal the rows and cols size
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // linear traverse 
        for(int i=0;i<rows; i++){
            // check if the first cols have 0, if yes then set col1 = 0
            if(matrix[i][0] == 0) col1 = 0;
            // traverse 2d
            for(int j=1;j<cols;j++){
                // checking if, element is found 0
                // if yes, the set that col and row element = '0'
                if(matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
            }
        }
        
        // traversal from back
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=1;j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
            // check if col1 is false, then set all row as 0
            if(col1 == 0) matrix[0][i] = 0;
        }
        
        
    }
};

// all test cases passed
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
  for (int i = 0; i < rows; i++) {
    //checking if 0 is present in the 0th column or not
    if (matrix[i][0] == 0) col0 = 0;
    for (int j = 1; j < cols; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }
  //traversing in the reverse direction and
  //checking if the row or col has 0 or not
  //and setting values of matrix accordingly.
  for (int i = rows - 1; i >= 0; i--) {
    for (int j = cols - 1; j >= 1; j--) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
    if (col0 == 0) {
      matrix[i][0] = 0;
    }

  }

}; 