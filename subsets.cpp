class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        vector<int> v{};
        res.push_back(v);
        if(n==0)
            return res;
        if(n==1)
        {
            vector<int> temp(1,nums[0]);
            res.push_back(temp);
            return res;
        }
        vector<int> prev(nums.begin(),nums.end()-1);
        res=subsets(prev);
        int m=res.size();
        for(int i=0;i<m;i++)
        {
            vector<int> temp=res[i];
            temp.push_back(nums[n-1]);
            res.push_back(temp);
        }
        return res;
    }
};