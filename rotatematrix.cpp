class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int top=0,bottom=matrix.size()-1,left=0,right=matrix.size()-1,n=matrix.size()-1;
        while(top<bottom)
        {
            for(int i=top;i<bottom;i++)
            {
                int temp=matrix[i][right];
                matrix[i][right]=matrix[top][i];
                int temp2=matrix[bottom][n-i];
                matrix[bottom][n-i]=temp;
                temp=matrix[n-i][left];
                matrix[n-i][left]=temp2;
                matrix[top][i]=temp;                
            }    
            top++;
            bottom--;
            left++;
            right--;
        }
    }
};