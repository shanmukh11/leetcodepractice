class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        res.push_back(nums);
        int n=nums.size();
        if(n<=1)
            return res;
        res.erase(res.begin(),res.end());
        vector<int>  pre;
        pre.assign(nums.begin(),nums.end()-1);
        vector<vector<int>> prev=permute(pre);
        for(int i=0;i<prev.size();i++)
        {
            for(int j=0;j<=prev[i].size();j++)
            {
                vector<int> temp=prev[i];
                temp.insert(temp.begin()+j,nums[n-1]);
                res.push_back(temp);
            }
        }
        return res;
    }
};