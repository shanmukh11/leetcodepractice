class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> line;
        int m=grid.size();
        if(m==0) return 0;
        int n=grid[0].size();
        vector<vector<int>> cost(m, vector<int> (n, 0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0&&j==0)
                    cost[0][0]=grid[0][0];
                else if(i==0&&j!=0)
                    cost[0][j]=cost[0][j-1]+grid[0][j];
                else if(i!=0&&j==0)
                    cost[i][0]=cost[i-1][0]+grid[i][0];
                else
                {
                    cost[i][j]=min(cost[i-1][j],cost[i][j-1])+grid[i][j];
                }
            }
        }
        return cost[m-1][n-1];
    }
};