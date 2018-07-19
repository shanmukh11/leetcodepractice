class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int m=matrix.size();
        if(m==0)
            return 0;
        int n=matrix[0].size();
        if(n==0) return 0;
        vector<int> temp(matrix[0].size(),0);
        vector<vector<int>> mat(matrix.size(),temp);
        int res=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]=='1')
                {
                    if(res==0)
                    res=1;
                    mat[i][j]=1;
                }
                else mat[i][j]=0;
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    int flag=1,ctv=1,cth=1;
                    int diag=mat[i-1][j-1];
                    for(int k=1;k<=diag;k++)
                    {
                        if(mat[i-k][j]==0)
                        {
                            break;
                        }
                        ctv++;
                    }
                    
                    for(int k=1;k<=diag;k++)
                    {
                        if(mat[i][j-k]==0)
                        {
                            break;
                        }
                        cth++;
                    }
                    
                    {
                        mat[i][j]=min(ctv,cth);  
                        res=max(res,mat[i][j]);
                    }
                }
            }
        }
        return res*res;
    }
};