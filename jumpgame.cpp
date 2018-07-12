class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return false; 
        vector<bool> arr(n,false);
        arr[0]=true;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==true)
            {
                for(int j=1;j<=nums[i];j++)
                {
                    if(j+i<n)
                        arr[j+i]=true;
                }
            }
        }
        return arr[n-1];
    }
};