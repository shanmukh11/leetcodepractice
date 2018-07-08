class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        unordered_map<int,int>::iterator it=m.begin();
        for(;it!=m.end();it++)
            if(it->second>1)
                return it->first;
        return -1;
    }
};