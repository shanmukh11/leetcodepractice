class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row,m=matrix.size(); 
        if(m==0)
            return false;
        int n=matrix[0].size();
        if(n==0) return false;
        for(int i=0;i<m;i++)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][n-1])
            {
                row=i;
                int low=0,high=n-1,mid;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(matrix[row][mid]>target)
                        high=mid-1;
                    else if(matrix[row][mid]<target)
                        low=mid+1;
                    else return true;
                }
        
            }
            else continue;
        }
        return false;
    }
};